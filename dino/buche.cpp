#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineBuche(){

    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    glPushMatrix();
    glTranslatef(0.0, -10.2, 0.0);
        glPushMatrix();
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(5.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(6.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(1.5, 2.5, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(3.0, 5.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
            glTranslatef(3.0, 0.0, 0.0);
            glutSolidCylinder(1.5, 20.0, 10.0, 10.0);
        glPopMatrix();
    glPopMatrix();

}
