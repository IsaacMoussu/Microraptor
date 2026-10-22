#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineAnneau3(){

    // Le dessus
    glColor3f(0.2f, 0.3f, 0.2f); // VERT
    glBegin(GL_QUADS);
        glVertex3f(15.6f, 2.0f, -0.544f); glVertex3f(17.4f, 2.0f, -0.496f); glVertex3f(17.4f, 2.0f, 0.496f); glVertex3f(15.6f, 2.0f, 0.544f);
        glVertex3f(15.6f, 2.0f, 0.544f);  glVertex3f(17.4f, 2.0f, 0.496f);  glVertex3f(17.4f, 1.6f, 0.496f); glVertex3f(15.6f, 1.6f, 0.544f);
        glVertex3f(15.6f, 1.6f, -0.544f); glVertex3f(17.4f, 1.6f, -0.496f); glVertex3f(17.4f, 2.0f, -0.496f); glVertex3f(15.6f, 2.0f, -0.544f);
    glEnd();

    // Le dessous
    glBegin(GL_QUADS);
        glVertex3f(15.6f, 1.6f, 0.544f);  glVertex3f(17.4f, 1.6f, 0.496f);  glVertex3f(17.4f, 1.2f, 0.264f); glVertex3f(15.6f, 1.2f, 0.296f);
        glVertex3f(15.6f, 1.2f, 0.296f);  glVertex3f(17.4f, 1.2f, 0.264f);  glVertex3f(17.4f, 1.2f, -0.264f); glVertex3f(15.6f, 1.2f, -0.296f);
        glVertex3f(15.6f, 1.2f, -0.296f); glVertex3f(17.4f, 1.2f, -0.264f); glVertex3f(17.4f, 1.6f, -0.496f); glVertex3f(15.6f, 1.6f, -0.544f);
    glEnd();

    glColor3f(0.2, 0.4, 0.2);//VERT
    glPushMatrix();
        glTranslatef(17.5, 1.6, 0.6);
        glRotatef(25, 0, -1.0, 0.0);
        glScalef(3.0, 0.3, 1.0);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3);//MARRON
    glPushMatrix();
        glTranslatef(17.5, 1.6, 0.6);
        glRotatef(25, 0, -1.0, 0.0);
        glScalef(4.0, 0.29, 0.99);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.2, 0.4, 0.2);//VERT
    glPushMatrix();
        glTranslatef(17.5, 1.6, -0.6);
        glRotatef(25, 0, 1.0, 0.0);
        glScalef(3.0, 0.3, 1.0);
        glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3);//MARRON
    glPushMatrix();
        glTranslatef(17.5, 1.6, -0.6);
        glRotatef(25, 0, 1.0, 0.0);
        glScalef(4.0, 0.29, 0.99);
        glutSolidCube(1.0);
    glPopMatrix();

}
