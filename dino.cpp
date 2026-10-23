#include "dino/fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>
#include <stdio.h>
#include <jpeglib.h>


char presse;
int anglex,angley = 20,x,y,xold,yold;
int camx = 0, camy = 0;
float zoom = 0.0f;
int vitesseAnim = 300;
int frame = 0;
int anim = 0;
bool marche = false;
float posMarche = 0;
float angleMarche = 0;

/* Prototype des fonctions */
void affichage();
void clavier(unsigned char touche,int x,int y);
void reshape(int x,int y);
void idle();
void mouse(int bouton,int etat,int x,int y);
void mousemotion(int x,int y);
void vSpecial(int key, int x, int y);
void initLight();

int main(int argc,char **argv)
{
  /* initialisation de glut et creation
     de la fenetre */
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowPosition(0,0);
  glutInitWindowSize(1000,700);
  glutCreateWindow("dino");

  /* Initialisation d'OpenGL */
  glClearColor(0.0,0.0,0.0,0.0);
  glColor3f(1.0,1.0,1.0);
  glPointSize(2.0);
  glEnable(GL_DEPTH_TEST);

  /* enregistrement des fonctions de rappel */
  glutDisplayFunc(affichage);
  glutKeyboardFunc(clavier);
  glutSpecialFunc(vSpecial);
  glutReshapeFunc(reshape);
  glutMouseFunc(mouse);
  glutMotionFunc(mousemotion);

  /* Entree dans la boucle principale glut */
  glutMainLoop();
  return 0;
}

void affichage()
{
  int i,j;
  /* effacement de l'image avec la couleur de fond */
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glShadeModel(GL_SMOOTH);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-100.0f + zoom, 100.0f - zoom, -100.0f + zoom, 100.0f - zoom, -100.0f + zoom, 100.0f - zoom);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glRotatef(angley,1.0,0.0,0.0);
  glRotatef(anglex,0.0,1.0,0.0);
  glTranslatef(camx, camy, 0.0);

    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    dessineRepere();
    initLight();
    dessineMap();

    if(marche)
        posMarche -= 0.015;
    if(marche)
        angleMarche += 0.05;
    if(angleMarche >= 360)
        angleMarche -= 360;

    glPushMatrix();
            glRotatef(angleMarche, 0, -1, 0);
            glTranslatef(15.0, 0.0, 0.0);
        glPushMatrix();
            glRotatef(90, 0, 1, 0);
            dessineCorps();
            dessineQueue(anim);
            dessinePattesAvant();
            gestionPattesArriere(anim, marche);
            dessineTete();
            dessineCou();
            dessineAile();
        glPopMatrix();
    glPopMatrix();


    animation();



  glFlush();

  //On echange les buffers
  glutSwapBuffers();
}

void initLight() {
    // 1. Allumage du moteur d'éclairage et lissage
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_SMOOTH);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);

    GLfloat lumiere_ciel[] = {0.6, 0.6, 0.6, 1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lumiere_ciel);

    glEnable(GL_LIGHT0);
    GLfloat ambiante[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    GLfloat diffuse[]  = { 0.8f, 0.8f, 0.8f, 1.0f };

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambiante);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
}

void animation(){

    frame++;
    if(frame >= vitesseAnim){
        frame = 0;
        anim++;
        if(anim >= 8)
            anim = 0;
    }

    glutPostRedisplay();
}

void dessineRepere(){

    //Rep�re
    //axe x en rouge
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
    	glVertex3f(0, 0,0.0);
    	glVertex3f(1, 0,0.0);
    glEnd();
    //axe des y en vert
    glBegin(GL_LINES);
    	glColor3f(0.0,1.0,0.0);
    	glVertex3f(0, 0,0.0);
    	glVertex3f(0, 1,0.0);
    glEnd();
    //axe des z en bleu
    glBegin(GL_LINES);
    	glColor3f(0.0,0.0,1.0);
    	glVertex3f(0, 0,0.0);
    	glVertex3f(0, 0,1.0);
    glEnd();
}


void clavier(unsigned char touche,int x,int y)
{
  switch (touche)
    {
    case 'p': /* affichage du carre plein */
      glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
      glutPostRedisplay();
      break;
    case 'f': /* affichage en mode fil de fer */
      glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
      glutPostRedisplay();
      break;
    case 's' : /* Affichage en mode sommets seuls */
      glPolygonMode(GL_FRONT_AND_BACK,GL_POINT);
      glutPostRedisplay();
      break;
    case 'd':
      glEnable(GL_DEPTH_TEST);
      glutPostRedisplay();
      break;
    case 'D':
      glDisable(GL_DEPTH_TEST);
      glutPostRedisplay();
      break;
    case 'a'://Les faces � l'envers s'affichent en fil de fer
      glPolygonMode(GL_FRONT,GL_FILL);
      glPolygonMode(GL_FRONT,GL_LINE);
      glutPostRedisplay();
    break;
    case 'q' : /*la touche 'q' permet de quitter le programme */
      exit(0);
    case 'z':// D�zoom
        if(zoom>-100)
          zoom -= 2 ;
          glutPostRedisplay();
    break;
    case 'Z':// Zoom
          zoom += 2 ;
          glutPostRedisplay();
    break;
     case 'b':
          camx += 2 ;
          glutPostRedisplay();
    break;
     case 'n':
          camx -= 2 ;
          glutPostRedisplay();
    break;
    case 'm':
        if(marche)
            marche = false;
        else
            marche = true;
          glutPostRedisplay();
    break;
    }
}

void vSpecial(int key, int x, int y)
{
	switch (key)
	{
		case GLUT_KEY_UP :
			angley += 10;
			glutPostRedisplay();
			break;

		case GLUT_KEY_DOWN :
			angley -= 10;
			glutPostRedisplay();
			break;

		case GLUT_KEY_LEFT :
			anglex -= 10;
			glutPostRedisplay();
			break;

		case GLUT_KEY_RIGHT :
			anglex += 10;
			glutPostRedisplay();
			break;
	}
}

void reshape(int x,int y)
{
  if (x<y)
    glViewport(0,(y-x)/2,x,x);
  else
    glViewport((x-y)/2,0,y,y);
}

void mouse(int button, int state,int x,int y)
{
  /* si on appuie sur le bouton gauche */
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
    presse = 1; /* le booleen presse passe a 1 (vrai) */
    xold = x; /* on sauvegarde la position de la souris */
    yold=y;
  }
  /* si on relache le bouton gauche */
  if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
    presse=0; /* le booleen presse passe a 0 (faux) */
}

void mousemotion(int x,int y)
  {
    if (presse) /* si le bouton gauche est presse */
    {
      /* on modifie les angles de rotation de l'objet
	 en fonction de la position actuelle de la souris et de la derniere
	 position sauvegardee */
      anglex=anglex+(x-xold);
      angley=angley+(y-yold);
      glutPostRedisplay(); /* on demande un rafraichissement de l'affichage */
    }

    xold=x; /* sauvegarde des valeurs courante de le position de la souris */
    yold=y;
  }
