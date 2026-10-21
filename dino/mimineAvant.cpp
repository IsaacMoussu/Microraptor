#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineMimineAvant(int i){
    glColor3f(0.2f, 0.3f, 0.2f); // VERT
    glPushMatrix();
        glTranslatef(-0.8, 1.5, 6.5 * i);
        glRotatef(90 - 50 * i, 0, -1, 0);
        glScalef(1.0, 0.5, 0.5);
        glutSolidSphere(1.0, 8.0, 8.0);
    glPopMatrix();

    //GRIFFES 1
    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    glPushMatrix();
        glTranslatef(-0.6, 1.5, 7.0 * i);
        glRotatef(90 - 60 * i, 0, -1, 0);
        glRotatef(30, -1, 0, 0);
        glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-0.95, 2.0, 7.6 * i);
        glRotatef(90 - 60 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCylinder(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();
    glColor3f(0.1f, 0.1f, 0.1f); // GRIS
    glPushMatrix();
        glTranslatef(-1.15, 1.5, 7.95 * i);
        glRotatef(90 - 60 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCone(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();

    //GRIFFES 2
    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    glPushMatrix();
        glTranslatef(-0.9, 1.5, 6.7 * i);
        glRotatef(90 - 50 * i, 0, -1, 0);
        glRotatef(30, -1, 0, 0);
        glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-1.35, 2.0, 7.2 * i);
        glRotatef(90 - 50 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCylinder(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();
    glColor3f(0.1f, 0.1f, 0.1f); // GRIS
    glPushMatrix();
        glTranslatef(-1.6, 1.5, 7.5 * i);
        glRotatef(90 - 50 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCone(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();

    //GRIFFES 3
    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    glPushMatrix();
        glTranslatef(-1.2, 1.5, 6.4 * i);
        glRotatef(90 - 40 * i, 0, -1, 0);
        glRotatef(30, -1, 0, 0);
        glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-1.75, 2.0, 6.8 * i);
        glRotatef(90 - 40 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCylinder(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();
    glColor3f(0.1f, 0.1f, 0.1f); // GRIS
    glPushMatrix();
        glTranslatef(-2.05, 1.5, 7.05 * i);
        glRotatef(90 - 40 * i, 0, -1, 0);
        glRotatef(-50, -1, 0, 0);
        glutSolidCone(0.2, 0.6, 6.0, 10.0);
    glPopMatrix();

}
