#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineAnneau5(GLuint texObject[])
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glColor3f(1.0, 1.0, 1.0);

    glPushMatrix();
    glTranslatef(-21.5, -1.6, 0.0);
    glColor3f(0.35, 0.3, 0.3); // MARRON
    // Le dessus
    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 2.0, -0.44);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 2.0, -0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 2.0, 0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 2.0, 0.4);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 2.0, 0.4);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 2.0, 0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 1.6, 0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 1.6, 0.41);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 1.6, -0.41);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 1.6, -0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 2.0, -0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 2.0, -0.44);

    glEnd();

    // Le dessous
    glBegin(GL_QUADS);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 1.6, 0.41);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 1.6, 0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 1.2, 0.2);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 1.2, 0.21);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 1.2, 0.21);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 1.2, 0.2);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 1.2, -0.2);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 1.2, -0.21);

    glTexCoord2f(0.0, 0.0);
    glVertex3f(19.2, 1.2, -0.21);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(21.0, 1.2, -0.2);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 1.6, -0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(19.2, 1.6, -0.41);

    glEnd();

    // Bout
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0, 1.0);
    glVertex3f(21.0, 2.0, -0.4);
    glTexCoord2f(0.0, 0.5);
    glVertex3f(21.0, 1.6, -0.4);
    glTexCoord2f(0.2, 0.0);
    glVertex3f(21.0, 1.2, -0.2);
    glTexCoord2f(0.8, 0.0);
    glVertex3f(21.0, 1.2, 0.2);
    glTexCoord2f(1.0, 0.5);
    glVertex3f(21.0, 1.6, 0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(21.0, 2.0, 0.4);
    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);

    for (int i = 1; i < 3; i++)
    {
        glColor3f(0.2, 0.4, 0.2); // VERT
        glPushMatrix();
        glTranslatef(0.0, 0.0, 0.8 * (i * i - i - 1));
        glRotatef(10, 0, i - i * i + 1, 0.0);
        glScalef(3.0, 0.29, 0.49);
        glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.35, 0.3, 0.3); // MARRON
        glPushMatrix();
        glTranslatef(0.0, 0.0, 0.8 * (i * i - i - 1));
        glRotatef(10, 0, i - i * i + 1, 0.0);
        glScalef(4.0, 0.28, 0.48);
        glutSolidCube(1.0);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.3, 0.0, 1.2 * (i * i - i - 1));
        glRotatef(15, 0, i - i * i + 1, 0.0);
        glScalef(1.0, 0.3, 0.8);
        glutSolidCube(1.0);
        glPopMatrix();

        glColor3f(0.6, 0, 0); // ROUGE
        glPushMatrix();
        glTranslatef(2.3, 0.0, 1.2 * (i * i - i - 1));
        glRotatef(15, 0, i - i * i + 1, 0.0);
        glScalef(0.5, 0.31, 0.4);
        glutSolidCube(1.0);
        glPopMatrix();
    }
}