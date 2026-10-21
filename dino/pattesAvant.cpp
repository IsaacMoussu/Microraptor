#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessinePattesAvant(){
    for(int i = -1; i < 2; i=i+2){
        glColor3f(0.2f, 0.3f, 0.2f); // VERT
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

            dessineMimineAvant(i);
        glPopMatrix();
    }
}
