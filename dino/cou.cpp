#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCou()
{
    // Cou vert foncé
    glPushMatrix();
    glScalef(2.0, 2.0, 2.0);
    glPushMatrix();
    glTranslatef(-0.4, 1.0, 0.0);
    glRotatef(19.0, 0, 0, -1.0);
    glScalef(1.9, 0.7, 0.9);
    glutSolidCube(1.0);
    glPopMatrix();

    // Cou beige
    glColor3f(0.8f, 0.8f, 0.7f); //BEIGE
    glPushMatrix();
    glTranslatef(-0.3, 0.45, 0.0);
    glRotatef(20.0, 0, 0, -1.0);
    glScalef(1.3, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.9, 0.65, 0.0);
    glRotatef(15.0, 0, 0, -1.0);
    glScalef(1.3, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPopMatrix();
    
}