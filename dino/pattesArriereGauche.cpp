#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessinePattesArriereGauche(){

        glColor3f(0.2f, 0.3f, 0.2f); // VERT
        glPushMatrix();
            glTranslatef(-8.0, 0.0, 0.0);
            glRotatef(70, 1, 0, 0);
            glPushMatrix();
                glTranslatef(8, 1.0, -0.5);//z = 0.5 quand bras ouverts
                glRotatef(20, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
                glTranslatef(0.0, 0.6, -1.0);
                glScalef(1.5, 1.0, 1.0);
                plumesLeLongDuBras(5.0, 0.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(6.2, 1.0, 3.7);
                glRotatef(-40, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
                glTranslatef(1.0, 0.6, 0.3);
               glRotatef(-30, 0, 1, 0);
               plumesLeLongDuBras(5.0, 0.0);
            glPopMatrix();
            glColor3f(0.35f, 0.3f, 0.3f); // MARRON
            glPushMatrix();
                glTranslatef(9.3, 1.0, 7.2);
                glRotatef(10, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(8.4, 0.9, 12.3);
                glRotatef(90, 0, 0, 1);
                glRotatef(160, 0, 1, 0);
                glScalef(1.0, 0.5, 0.5);
                glutSolidSphere(1.0, 8.0, 8.0);
            glPopMatrix();

            dessineMimineArriere(1);
        glPopMatrix();

}
