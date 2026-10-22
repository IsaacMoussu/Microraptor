#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessinePattesArriere(){
    for(int i = -1; i < 2; i=i+2){
        glColor3f(0.2f, 0.3f, 0.2f); // VERT
        glPushMatrix();
            glRotatef(70 * i, 1, 0, 0);
            glPushMatrix();
                glTranslatef(8, 1.0, -0.5 * i);//z = 0.5 quand bras ouverts
                glRotatef(90 - 70 * i, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(6.2, 1.0, 3.7 * i);
                glRotatef(-90 + 50 * i, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
            glPopMatrix();
            glColor3f(0.35f, 0.3f, 0.3f); // MARRON
            glPushMatrix();
                glTranslatef(9.3, 1.0, 7.2 * i);
                glRotatef(90 - 80 * i, 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(8.4, 0.9, 12.3 * i);
                glRotatef(90, 0, 0, 1);
                glRotatef(90 + 70 * i, 0, 1, 0);
                glScalef(1.0, 0.5, 0.5);
                glutSolidSphere(1.0, 8.0, 8.0);
            glPopMatrix();

            dessineMimineArriere(i);
        glPopMatrix();
    }

}
