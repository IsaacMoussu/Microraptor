#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCorps(){

// 2 extrémités
glColor3f(0.8f, 0.8f, 0.7f); //BEIGE
// Bouchon X = 0
glBegin(GL_POLYGON);
    glVertex3f(0.0f, 2.0f, -1.0f);
    glVertex3f(0.0f, 1.0f, -1.0f);
    glVertex3f(0.0f, 0.0f, -0.5f);
    glVertex3f(0.0f, 0.0f,  0.5f);
    glVertex3f(0.0f, 1.0f,  1.0f);
    glVertex3f(0.0f, 2.0f,  1.0f);
glEnd();

// CORPS

// dessus troncon 1
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1 
    glVertex3f(0.0f, 2.0f, -1.0f);  glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(0.0f, 2.0f, 1.0f);
    // Face 2 
    glVertex3f(0.0f, 2.0f, 1.0f);   glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(0.0f, 1.0f, 1.0f);
    // Face 6
    glVertex3f(0.0f, 1.0f, -1.0f);  glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(0.0f, 2.0f, -1.0f);
glEnd();

// dessous troncon 1
glColor3f(0.8f, 0.8f, 0.7f);//BEIGE
glBegin(GL_QUADS);
    // Face 3 
    glVertex3f(0.0f, 1.0f, 1.0f);   glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(0.0f, 0.0f, 0.5f);
    // Face 4 
    glVertex3f(0.0f, 0.0f, 0.5f);   glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(0.0f, 0.0f, -0.5f);
    // Face 5
    glVertex3f(0.0f, 0.0f, -0.5f);  glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(0.0f, 1.0f, -1.0f);
glEnd();

// dessus troncon 2
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(12.0f, 2.0f, -0.64f); glVertex3f(12.0f, 2.0f, 0.64f); glVertex3f(6.0f, 2.0f, 0.82f);
    // Face 2
    glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(12.0f, 2.0f, 0.64f);  glVertex3f(12.0f, 1.6f, 0.64f); glVertex3f(6.0f, 1.0f, 0.82f);
    // Face 6
    glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(12.0f, 1.6f, -0.64f); glVertex3f(12.0f, 2.0f, -0.64f); glVertex3f(6.0f, 2.0f, -0.82f);
glEnd();

// dessous troncon 2
glColor3f(0.8f, 0.8f, 0.7f);//BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(12.0f, 1.6f, 0.64f);  glVertex3f(12.0f, 1.2f, 0.36f); glVertex3f(6.0f, 0.0f, 0.41f);
    // Face 4
    glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(12.0f, 1.2f, 0.36f);  glVertex3f(12.0f, 1.2f, -0.36f); glVertex3f(6.0f, 0.0f, -0.41f);
    // Face 5
    glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(12.0f, 1.2f, -0.36f); glVertex3f(12.0f, 1.6f, -0.64f); glVertex3f(6.0f, 1.0f, -0.82f);
glEnd();


// plumes corps
for(int j = -1; j<2; j = j+2){

    for(int i=0; i<12; i++){
     glPushMatrix();
     glRotatef(30 * j, 1, 0, 0);
     glTranslatef( i+ 0.0, 1.3, 0.0-j);
     glRotatef(-15, 0, 0, 1);
     glScalef(1.0, 0.3, 1.5);                
     glColor3f(0.2f, 0.3f, 0.2f); // VERT
     glutSolidCube(1.0);
     glPopMatrix();
}
}


}
