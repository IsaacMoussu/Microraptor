#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessinePattesAvant(){
    for(int i = -1; i < 2; i=i+2){
        glPushMatrix();
            glRotatef(50 * i, 1, 0, 0);
            glPushMatrix();
                glTranslatef(0.5, 1.5, 0.0);//z = 0.5 quand bras oouverts
                glRotatef(-90 + 70 * i, 0, -1, 0);
                glutSolidCylinder(0.5, 4.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(1.9, 1.5, 3.3 * i);
                glRotatef(90 - 50 * i, 0, -1, 0);
                glutSolidCylinder(0.5, 4.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(-0.8, 1.5, 6.5 * i);
                glRotatef(90 - 50 * i, 0, -1, 0);
                glScalef(1.0, 0.5, 0.5);
                glutSolidSphere(1.0, 8.0, 8.0);
            glPopMatrix();

            //GRIFFES 1
            glPushMatrix();
                glTranslatef(-0.6, 1.5, 7.0 * i);
                glRotatef(90 - 60 * i, 0, -1, 0);
                glRotatef(30, -1, 0, 0);
                glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
            glPopMatrix();

            //GRIFFES 2
            glPushMatrix();
                glTranslatef(-0.9, 1.5, 6.7 * i);
                glRotatef(90 - 50 * i, 0, -1, 0);
                glRotatef(30, -1, 0, 0);
                glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
            glPopMatrix();

            //GRIFFES 3
            glPushMatrix();
                glTranslatef(-1.2, 1.5, 6.4 * i);
                glRotatef(90 - 40 * i, 0, -1, 0);
                glRotatef(30, -1, 0, 0);
                glutSolidCylinder(0.2, 1.0, 6.0, 10.0);
            glPopMatrix();

        glPopMatrix();
    }

}
