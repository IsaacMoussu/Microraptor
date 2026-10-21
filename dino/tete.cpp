#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineTete()
{
    glPushMatrix();
    glTranslatef(-0.3, -0.8, 0.0);
    glScalef(2.0, 2.0, 2.0);
    // tete (vert foncé)
    glColor3f(0.2f, 0.3f, 0.2f); // VERT
    glPushMatrix();
    glTranslatef(-1.9, 1.6, 0.0);
    glRotatef(7.0, 0, 0, 1.0);
    glScalef(1.5, 0.8, 0.7);
    glutSolidCube(1.0);
    glPopMatrix();

    // museau (sphere cylindrique grise)
    // glColor3f(0.35, 0.3, 0.3);
    glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    glTranslatef(-3.0, 1.45, 0.0);
    glRotatef(7.0, 0, 0, 1.0);
    glRotatef(-90.0, 0, 1, 0);
    glScalef(0.35, 0.40, 1.2);
    // dessineSphere();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

    // Bec bas (cylindre gris foncé)
    /*glColor3f(0.15, 0.15, 0.15);
    glPushMatrix();
      glTranslatef(-2.5, 1.22, 0.0);
      glRotatef(8.0, 0, 0, 1.0);
      glRotatef(-90.0, 0, 1, 0);
      glScalef(1.0, 0.6, 1.0);
      glutSolidCylinder(0.2, 1.1, 20, 4);
    glPopMatrix(); */

    // Gorge rouge
    glColor3f(0.6, 0.0, 0.0); // Rouge
    glPushMatrix();
    glTranslatef(-1.7, 1.0, 0.0);
    glRotatef(7.0, 0, 0, 1.0);
    glScalef(1.0, 0.4, 0.8);
    glutSolidCube(1.0);
    glPopMatrix();

    // Zone gris autour d'oeil
    glColor3f(0.15, 0.15, 0.15); // Gris foncé
    glPushMatrix();
    glTranslatef(-2.1, 1.65, 0.36);
    glRotatef(8.0, 0, 0, 1.0);
    glScalef(1.0, 0.35, 0.05);
    glutSolidCube(1.0);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.1, 1.65, -0.36);
    glRotatef(8.0, 0, 0, 1.0);
    glScalef(1.0, 0.35, 0.05);
    glutSolidCube(1.0);
    glPopMatrix();

    // Oeil
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-2.45, 1.72, 0.37);
    glutSolidSphere(0.1, 16, 16);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2.45, 1.72, -0.37);
    glutSolidSphere(0.1, 16, 16);
    glPopMatrix();
    glPopMatrix();
}