#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCorps(GLuint texObject[])
{

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glColor3f(1.0, 1.0, 1.0);

    glColor3f(0.8, 0.8, 0.7); // BEIGE

    // Bout
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 2.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(0.0, 0.0, -0.5);
        glVertex3f(0.0, 0.0, 0.5);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(0.0, 2.0, 1.0);
    glEnd();

    // CORPS
    // dessus 1
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 2.0, -1.0);
        glTexCoord2f(1.0, 0.0); glVertex3f(6.0, 2.0, -0.82);
        glTexCoord2f(1.0, 1.0); glVertex3f(6.0, 2.0, 0.82);
        glTexCoord2f(0.0, 1.0); glVertex3f(0.0, 2.0, 1.0);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 2.0, 1.0);
        glTexCoord2f(1.0, 0.0); glVertex3f(6.0, 2.0, 0.82);
        glTexCoord2f(1.0, 1.0); glVertex3f(6.0, 1.0, 0.82);
        glTexCoord2f(0.0, 1.0); glVertex3f(0.0, 1.0, 1.0);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 1.0, -1.0);
        glTexCoord2f(1.0, 0.0); glVertex3f(6.0, 1.0, -0.82);
        glTexCoord2f(1.0, 1.0); glVertex3f(6.0, 2.0, -0.82);
        glTexCoord2f(0.0, 1.0); glVertex3f(0.0, 2.0, -1.0);
    glEnd();

    // dessous 1
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 1.0, 1.0);
        glTexCoord2f(1.0, 0.0); glVertex3f(6.0, 1.0, 0.82);
        glTexCoord2f(1.0, 1.0); glVertex3f(6.0, 0.0, 0.41);
        glTexCoord2f(0.0, 1.0); glVertex3f(0.0, 0.0, 0.5);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 0.0, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(6.0, 0.0, 0.41);
        glTexCoord2f(1.0, 1.0); glVertex3f(6.0, 0.0, -0.41);
        glTexCoord2f(0.0, 1.0); glVertex3f(0.0, 0.0, -0.5);

        // Face 5
        glVertex3f(6.0, 0.0, -0.41);
        glVertex3f(6.0, 1.0, -0.82);
        glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    // dessus 2
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 2.0, -0.82);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 2.0, -0.64);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 2.0, 0.64);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 2.0, 0.82);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 2.0, 0.82);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 2.0, 0.64);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 1.6, 0.64);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 1.0, 0.82);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 1.0, -0.82);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 1.6, -0.64);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 2.0, -0.64);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 2.0, -0.82);
    glEnd();

    // dessous 2
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 1.0, 0.82);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 1.6, 0.64);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 1.2, 0.36);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 0.0, 0.41);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 0.0, 0.41);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 1.2, 0.36);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 1.2, -0.36);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 0.0, -0.41);

        // Face 5
        glTexCoord2f(0.0, 0.0); glVertex3f(6.0, 0.0, -0.41);
        glTexCoord2f(1.0, 0.0); glVertex3f(12.0, 1.2, -0.36);
        glTexCoord2f(1.0, 1.0); glVertex3f(12.0, 1.6, -0.64);
        glTexCoord2f(0.0, 1.0); glVertex3f(6.0, 1.0, -0.82);
    glEnd();

    glDisable(GL_TEXTURE_2D);

    // plumes corps
    for (int j = -1; j < 2; j = j + 2)
    {
        for (int i = 0; i < 12; i++)
        {
            glPushMatrix();
            glRotatef(30 * j, 1, 0, 0);
            glTranslatef(i + 0.0, 1.3, 0.0 - j);
            glRotatef(-15, 0, 0, 1);
            glScalef(1.0, 0.3, 1.5);
            glColor3f(0.2, 0.3, 0.2); // VERT
            glutSolidCube(1.0);
            glPopMatrix();
        }
    }
}