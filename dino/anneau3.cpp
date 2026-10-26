#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineAnneau3(GLuint texObject[])
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glColor3f(1.0f, 1.0f, 1.0f);

    glPushMatrix();
    glTranslatef(-17.5, -1.6, 0.0);
    // Le dessus
    glColor3f(0.2f, 0.3f, 0.2f); // VERT
    glBegin(GL_QUADS);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 2.0f, -0.544f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 2.0f, -0.496f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 2.0f, 0.496f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 2.0f, 0.544f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 2.0f, 0.544f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 2.0f, 0.496f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 1.6f, 0.496f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 1.6f, 0.544f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 1.6f, -0.544f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 1.6f, -0.496f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 2.0f, -0.496f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 2.0f, -0.544f);
    glEnd();

    // Le dessous
    glBegin(GL_QUADS);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 1.6f, 0.544f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 1.6f, 0.496f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 1.2f, 0.264f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 1.2f, 0.296f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 1.2f, 0.296f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 1.2f, 0.264f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 1.2f, -0.264f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 1.2f, -0.296f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(15.6f, 1.2f, -0.296f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(17.4f, 1.2f, -0.264f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(17.4f, 1.6f, -0.496f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(15.6f, 1.6f, -0.544f);
    glEnd();
    glPopMatrix();

    glColor3f(0.2, 0.4, 0.2); // VERT
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.6);
    glRotatef(25, 0, -1.0, 0.0);
    glScalef(3.0, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3); // MARRON
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.6);
    glRotatef(25, 0, -1.0, 0.0);
    glScalef(4.0, 0.29, 0.99);
    glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.2, 0.4, 0.2); // VERT
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.6);
    glRotatef(25, 0, 1.0, 0.0);
    glScalef(3.0, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glColor3f(0.35, 0.3, 0.3); // MARRON
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.6);
    glRotatef(25, 0, 1.0, 0.0);
    glScalef(4.0, 0.29, 0.99);
    glutSolidCube(1.0);
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}
