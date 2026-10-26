#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineQueue(int i, GLuint texObject[]){

    int motif1[] = {0, 1, 2, 1, 0, -1, -2, -1};
    int motif2[] = {-1, 0, 1, 2, 1, 0, -1, -2};
    int motif3[] = {-2, -1, 0, 1, 2, 1, 0, -1};
    int motif4[] = {-1, -2, -1, 0, 1, 2, 1, 0};
    int motif5[] = {0, -1, -2, -1, 0, 1, 2, 1};
    float deplacement1[] = {-0.3, 0.25, 0.8, 0.85, 0.3, -0.25, -0.8, -0.85};
    float deplacement2[] = {-1.0, -0.1, 0.8, 1.2, 1.0, 0.1, -0.8, -1.2};
    float deplacement3[] = {-1.35, -0.85, 0.45, 1.17, 1.35, 0.85, -0.45, -1.17};
    float deplacement4[] = {-1.3, -1.15, -0.3, 0.78, 1.3, 1.15, 0.3, -0.78};

    glPushMatrix();
        glTranslatef(13.5, 1.6, 0.0);
        glTranslatef(0.0, 0.2 * motif1[i], 0.0);
        glRotatef(10 * motif1[i] ,0, 0, 1);
        dessineAnneau1(texObject);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15.5, 1.6, 0.0);
        glTranslatef(0.0, deplacement1[i], 0.0);
        glRotatef(10 * motif2[i] ,0, 0, 1);
        dessineAnneau2(texObject);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(17.5, 1.6, 0.0);
        glTranslatef(0.0, deplacement2[i], 0.0);
        glRotatef(10 * motif3[i] ,0, 0, 1);
        dessineAnneau3(texObject);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(19.5, 1.6, 0.0);
        glTranslatef(0.0, deplacement3[i], 0.0);
        glRotatef(10 * motif4[i] ,0, 0, 1);
        dessineAnneau4(texObject);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21.5, 1.6, 0.0);
        glTranslatef(0.0, deplacement4[i], 0.0);
        glRotatef(10 * motif5[i] ,0, 0, 1);
        dessineAnneau5(texObject);
    glPopMatrix();


/*
    //LA QUEUEEEEEE
    glColor3f(0.2, 0.4, 0.2);//VERT
    glPushMatrix();
        glTranslatef(11.5, 1.6, 0.6);
        glRotatef(25, 0, -1.0, 0.0);
        glScalef(3.0, 0.3, 1.0);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3);//MARRON
    glPushMatrix();
        glTranslatef(11.5, 1.6, 0.6);
        glRotatef(25, 0, -1.0, 0.0);
        glScalef(4.0, 0.29, 0.99);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.2, 0.4, 0.2);//VERT
    glPushMatrix();
        glTranslatef(11.5, 1.6, -0.6);
        glRotatef(25, 0, 1.0, 0.0);
        glScalef(3.0, 0.3, 1.0);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3);//MARRON
    glPushMatrix();
        glTranslatef(11.5, 1.6, -0.6);
        glRotatef(25, 0, 1.0, 0.0);
        glScalef(4.0, 0.29, 0.99);
        glutSolidCube(1.0);
    glPopMatrix();*/

}
