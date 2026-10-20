
#include "dino/fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

char presse;
int anglex,angley,x,y,xold,yold;
float zoom = 0.0f;

/* Prototype des fonctions */
void affichage();
void clavier(unsigned char touche,int x,int y);
void reshape(int x,int y);
void idle();
void mouse(int bouton,int etat,int x,int y);
void mousemotion(int x,int y);

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
  glOrtho(-30.0f + zoom, 30.0f - zoom, -30.0f + zoom, 30.0f - zoom, -30.0f + zoom, 30.0f - zoom);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glRotatef(angley,1.0,0.0,0.0);
  glRotatef(anglex,0.0,1.0,0.0);

    //Repère
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



    //glColor3f(0.8, 0.8, 0.7); BEIGE
    //glColor3f(0.35, 0.3, 0.3);MARRON
    //glColor3f(0.6, 0, 0);ROUGE


dessineCorps();
dessineQueue();
dessinePattesAvant();
dessinePattesArriere();




  /*glColor3f(0.2, 0.3, 0.2);
  glPushMatrix();
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(2.0, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(3.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.8, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(6.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.6, 2.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(8.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.4, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(9.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.2, 8.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(17.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.0, 2.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(19.0, 0.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(0.8, 8.0, 8, 8);
  glPopMatrix();


  glColor3f(0.8, 0.8, 0.7);
  glPushMatrix();
    glTranslatef(0.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.8, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(3.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.6, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(6.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.4, 2.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(8.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.2, 3.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(9.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(1.0, 8.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(17.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(0.8, 2.0, 8, 8);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(19.0, -0.4, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidCylinder(0.6, 4.0, 8, 8);
  glPopMatrix();
*/

/*
    //corps du dino
    glColor3f(0.2, 0.3, 0.2);// VERT FONCE
  glPushMatrix();
    glRotatef(5.0, 0, 0, -2.0);
    glScalef(2.0, 1.0, 1.4);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(1.8, -0.2, 0.0);
    glRotatef(5.0, 0, 0, -1.0);
    glScalef(2.0, 1.0, 1.2);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(3.6, -0.3, 0.0);
    glRotatef(5.0, 0, 0, 0.0);
    glScalef(2.0, 1.0, 1.0);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(5.6, -0.2, 0.0);
    glRotatef(5.0, 0, 0, 1.0);
    glScalef(2.5, 1.0, 0.8);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-0.8, -0.4, 0.0);
    glRotatef(80.0, 0, 0, -1.0);
    glScalef(2.0, 1.0, 1.4);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
  glTranslatef(0.0, -1.4, 0.0);
    glRotatef(30.0, 0, 0, -1.0);
    glScalef(2.2, 1.0, 1.4);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(1.8, -2.1, 0.0);
    glRotatef(15.0, 0, 0, -1.0);
    glScalef(2.0, 1.0, 1.2);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(3.6, -2.3, 0.0);
    glRotatef(5.0, 0, 0, 1.0);
    glScalef(2.2, 1.0, 1.0);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(5.4, -1.7, 0.0);
    glRotatef(32.0, 0, 0, 1.0);
    glScalef(2.1, 1.0, 0.8);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(0.3, -1.0, 0.0);
    glRotatef(5.0, 0, 0, -1.0);
    glScalef(1.4, 1.0, 1.4);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(1.8, -1.2, 0.0);
    glScalef(2.0, 1.4, 1.2);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(3.6, -1.2, 0.0);
    glScalef(2.0, 1.4, 1.0);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(5.4, -1.0, 0.0);
    glRotatef(10.0, 0, 0, 1.0);
    glScalef(2.0, 1.0, 0.8);
    glutSolidCube(1.0);
  glPopMatrix();


    //queue du dino
  glPushMatrix();
    glTranslatef(7.2, -0.7, 0.0);
    glRotatef(28.0, 0, 0, 1.0);
    glScalef(2.5, 1.0, 0.6);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(9.0, -0.1, 0.0);
    glRotatef(18.0, 0, 0, 1.0);
    glScalef(1.5, 0.5, 0.6);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(7.9, 0.1, 0.0);
    glRotatef(5.0, 0, 0, 2.0);
    glScalef(3.0, 0.7, 0.6);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(10.8, 0.2, 0.0);
    glScalef(3.0, 0.6, 0.4);
    glutSolidCube(1.0);
  glPopMatrix();
  glPushMatrix();
    glColor3f(0.35, 0.3, 0.3);
    glTranslatef(12.8, 0.2, 0.0);
    glScalef(1.0, 0.6, 0.4);
    glutSolidCube(1.0);
  glPopMatrix();

*/





  glFlush();

  //On echange les buffers
  glutSwapBuffers();
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
    case 'a'://Les faces à l'envers s'affichent en fil de fer
      glPolygonMode(GL_FRONT,GL_FILL);
      glPolygonMode(GL_FRONT,GL_LINE);
      glutPostRedisplay();
    break;
    case 'q' : /*la touche 'q' permet de quitter le programme */
      exit(0);
    case 'z':// Dézoom
        if(zoom>-100)
          zoom -= 2 ;
          glutPostRedisplay();
    break;
    case 'Z':// Zoom
        //if(zoom<5)
          zoom += 2 ;
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
