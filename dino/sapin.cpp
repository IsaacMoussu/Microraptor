#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineSapin(){

    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    glPushMatrix();
        glTranslatef(0.0, -11.7, 0.0);
        glRotatef(90, -1, 0, 0);
        glutSolidCone(1.5, 20.0, 10.0, 10.0);
    glPopMatrix();
    glColor3f(0.2, 0.4, 0.2);//VERT
    glPushMatrix();
        glTranslatef(0.0, 4.0, 0.0);
        glRotatef(90, -1, 0, 0);
        glutSolidCone(8.0, 8.0, 10.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.0, 10.0, 0.0);
        glRotatef(90, -1, 0, 0);
        glutSolidCone(7.0, 8.0, 10.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.0, 16.0, 0.0);
        glRotatef(90, -1, 0, 0);
        glutSolidCone(6.0, 8.0, 10.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.0, 22.0, 0.0);
        glRotatef(90, -1, 0, 0);
        glutSolidCone(5.0, 8.0, 10.0, 10.0);
    glPopMatrix();

}
