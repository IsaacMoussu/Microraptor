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
    glColor3f(1.0f, 1.0f, 1.0f);

    glPushMatrix();
    glTranslatef(-21.5, -1.6, 0.0);
    glColor3f(0.35f, 0.3f, 0.3f); // MARRON
    // Le dessus
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 2.0f, -0.448f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 2.0f, -0.4f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 2.0f, 0.4f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 2.0f, 0.4f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 2.0f, 0.4f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 2.0f, 0.4f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 1.6f, 0.4f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 1.6f, 0.416f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 1.6f, -0.416f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 1.6f, -0.4f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 2.0f, -0.4f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 2.0f, -0.448f);

    glEnd();

    // Le dessous
    glBegin(GL_QUADS);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 1.6f, 0.416f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 1.6f, 0.4f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 1.2f, 0.2f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 1.2f, 0.216f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 1.2f, 0.216f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 1.2f, 0.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 1.2f, -0.2f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 1.2f, -0.216f);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(19.2f, 1.2f, -0.216f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(21.0f, 1.2f, -0.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 1.6f, -0.4f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(19.2f, 1.6f, -0.416f);

    glEnd();

    // Bouchon 
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(21.0f, 2.0f, -0.4f);
    glTexCoord2f(0.0f, 0.5f); 
    glVertex3f(21.0f, 1.6f, -0.4f);
    glTexCoord2f(0.2f, 0.0f);
    glVertex3f(21.0f, 1.2f, -0.2f);
    glTexCoord2f(0.8f, 0.0f);
    glVertex3f(21.0f, 1.2f, 0.2f);
    glTexCoord2f(1.0f, 0.5f);
    glVertex3f(21.0f, 1.6f, 0.4f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(21.0f, 2.0f, 0.4f);
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
