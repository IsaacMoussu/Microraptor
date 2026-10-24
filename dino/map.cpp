#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineMap(){

    glColor3f(0.7f, 0.6f, 0.5f); //SABLE
    glPushMatrix();
    glTranslatef(0.0, -12.2, 0.0);
        glScaled(150.0, 1.0, 150.0);
        glutSolidCube(1.0);
    glPopMatrix();


    glPushMatrix();
        glTranslatef(-30.0, 0.0, -35.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-10.0, 0.0, -40.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-20.0, 0.0, -55.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(30.0, 0.0, -45.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(60.0, 0.0, -65.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(10.0, 0.0, -60.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(55.0, 0.0, -20.0);
        dessineSapin();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-55.0, 0.0, -70.0);
        glRotatef(45, 0, -1, 0);
        dessineBuche();
    glPopMatrix();


}
