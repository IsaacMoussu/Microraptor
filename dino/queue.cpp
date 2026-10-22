#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineQueue(){
    //LA QUEUEEEEEE
    for(int i = 0; i < 5; i++){
        glColor3f(0.2, 0.4, 0.2);//VERT
        glPushMatrix();
            glTranslatef(11.5 + i*2.0, 1.6, 0.6);
            glRotatef(25, 0, -1.0, 0.0);
            glScalef(3.0, 0.3, 1.0);
            glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.35, 0.3, 0.3);//MARRON
        glPushMatrix();
            glTranslatef(11.5 + i*2.0, 1.6, 0.6);
            glRotatef(25, 0, -1.0, 0.0);
            glScalef(4.0, 0.29, 0.99);
            glutSolidCube(1.0);
        glPopMatrix();
    }

    for(int i = 0; i < 5; i++){
        glColor3f(0.2, 0.4, 0.2);//VERT
        glPushMatrix();
            glTranslatef(11.5 + i*2.0, 1.6, -0.6);
            glRotatef(25, 0, 1.0, 0.0);
            glScalef(3.0, 0.3, 1.0);
            glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.35, 0.3, 0.3);//MARRON
        glPushMatrix();
            glTranslatef(11.5 + i*2.0, 1.6, -0.6);
            glRotatef(25, 0, 1.0, 0.0);
            glScalef(4.0, 0.29, 0.99);
            glutSolidCube(1.0);
        glPopMatrix();
    }

    for(int i = 1; i < 3; i++){
        glColor3f(0.2, 0.4, 0.2);//VERT
        glPushMatrix();
            glTranslatef(21.5, 1.6, 0.8 * (i*i - i -1));
            glRotatef(10, 0, i - i*i + 1, 0.0);
            glScalef(3.0, 0.29, 0.49);
            glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.35, 0.3, 0.3);//MARRON
        glPushMatrix();
            glTranslatef(21.5, 1.6, 0.8 * (i*i - i -1));
            glRotatef(10, 0, i - i*i + 1, 0.0);
            glScalef(4.0, 0.28, 0.48);
            glutSolidCube(1.0);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(23.8, 1.6, 1.2 * (i*i - i -1));
            glRotatef(15, 0, i - i*i + 1, 0.0);
            glScalef(1.0, 0.3, 0.8);
            glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.6, 0, 0);//ROUGE
        glPushMatrix();
            glTranslatef(23.8, 1.6, 1.2 * (i*i - i -1));
            glRotatef(15, 0, i - i*i + 1, 0.0);
            glScalef(0.5, 0.31, 0.4);
            glutSolidCube(1.0);
        glPopMatrix();
    }

}
