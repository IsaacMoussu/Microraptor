#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineTete(GLuint texObject[])
{

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glColor3f(1.0, 1.0, 1.0);


    // cou
    // dessus
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 3.2, -0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 3.4, -0.8);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 3.4, 0.8);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 3.2, 0.5);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 3.2, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 3.4, 0.8);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 2.8, 0.8);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 2.4, 0.5);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 2.4, -0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 2.8, -0.8);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 3.4, -0.8);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 3.2, -0.5);
    glEnd();

    // dessous
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 2.4, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 2.8, 0.8);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 2.1, 0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 1.5, 0.3);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 1.5, 0.3);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 2.1, 0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 2.1, -0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 1.5, -0.3);

        // Face 5
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.1, 1.5, -0.3);
        glTexCoord2f(1.0, 0.0); glVertex3f(-1.8, 2.1, -0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-1.8, 2.8, -0.8);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.1, 2.4, -0.5);
    glEnd();

    // crane
    // dessus
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 3.4, -0.8);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 3.3, -0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 3.3, 0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 3.4, 0.8);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 3.4, 0.8);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 3.3, 0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 2.8, 0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 2.8, 0.8);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 2.8, -0.8);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 2.8, -0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 3.3, -0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 3.4, -0.8);
    glEnd();

    // dessous
    glColor3f(0.6, 0.0, 0.0); // Rouge
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 2.8, 0.8);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 2.8, 0.5);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 2.3, 0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 2.1, 0.5);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 2.1, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 2.3, 0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 2.3, -0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 2.1, -0.5);

        // Face 5
        glTexCoord2f(0.0, 0.0); glVertex3f(-1.8, 2.1, -0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-2.8, 2.3, -0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-2.8, 2.8, -0.5);
        glTexCoord2f(0.0, 1.0); glVertex3f(-1.8, 2.8, -0.8);
    glEnd();

    // debut museau ; dessus
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 3.3, -0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 3.2, -0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 3.2, 0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 3.3, 0.5);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 3.3, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 3.2, 0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 2.8, 0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 2.8, 0.5);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 2.8, -0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 2.8, -0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 3.2, -0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 3.3, -0.5);
    glEnd();

    // Tache grise oeil
    glColor3f(0.2, 0.2, 0.2); // Gris foncé
    glBegin(GL_QUADS);
        glVertex3f(-2.8, 3.3, 0.49);
        glVertex3f(-3.4, 3.2, 0.39);
        glVertex3f(-3.4, 2.8, 0.5);
        glVertex3f(-2.8, 2.8, 0.6);

        glVertex3f(-2.8, 2.8, -0.6);
        glVertex3f(-3.4, 2.8, -0.5);
        glVertex3f(-3.4, 3.2, -0.39);
        glVertex3f(-2.8, 3.3, -0.49);
    glEnd();

    // dessous
    glColor3f(0.6, 0.0, 0.0); // Rouge
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 2.8, 0.5);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 2.8, 0.4);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 2.4, 0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 2.3, 0.4);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 2.3, 0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 2.4, 0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 2.4, -0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 2.3, -0.4);

        // Face 5
        glTexCoord2f(0.0, 0.0); glVertex3f(-2.8, 2.3, -0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-3.4, 2.4, -0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-3.4, 2.8, -0.4);
        glTexCoord2f(0.0, 1.0); glVertex3f(-2.8, 2.8, -0.5);
    glEnd();

    // Oeil
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
        glTranslatef(-3.0f, 3.1f, 0.5f);
        glutSolidSphere(0.1, 16, 16);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3.0f, 3.1f, -0.5f);
        glutSolidSphere(0.1, 16, 16);
    glPopMatrix();

    // museau gris
    glColor3f(0.3, 0.3, 0.3); // GRIS FONCÉ
    glBegin(GL_QUADS);
        // Face 1
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 3.2, -0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 3.1, -0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 3.1, 0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 3.2, 0.4);

        // Face 2
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 3.2, 0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 3.1, 0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 2.8, 0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 2.8, 0.4);

        // Face 6
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 2.8, -0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 2.8, -0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 3.1, -0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 3.2, -0.4);
    glEnd();

    // Le dessous 7
    glColor3f(0.3, 0.3, 0.3); // GRIS FONCÉ
    glBegin(GL_QUADS);
        // Face 3
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 2.8, 0.4);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 2.8, 0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 2.5, 0.2);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 2.4, 0.3);

        // Face 4
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 2.4, 0.3);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 2.5, 0.2);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 2.5, -0.2);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 2.4, -0.3);

        // Face 5
        glTexCoord2f(0.0, 0.0); glVertex3f(-3.4, 2.4, -0.3);
        glTexCoord2f(1.0, 0.0); glVertex3f(-4.2, 2.5, -0.2);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 2.8, -0.3);
        glTexCoord2f(0.0, 1.0); glVertex3f(-3.4, 2.8, -0.4);
    glEnd();

    // Bout du nez
    glColor3f(0.3, 0.3, 0.3); // GRIS FONCÉ
    glBegin(GL_POLYGON);
        glTexCoord2f(0.0, 1.0); glVertex3f(-4.2, 3.1, -0.3);
        glTexCoord2f(0.0, 0.5); glVertex3f(-4.2, 2.8, -0.3);
        glTexCoord2f(0.2, 0.0); glVertex3f(-4.2, 2.5, -0.2);
        glTexCoord2f(0.8, 0.0); glVertex3f(-4.2, 2.5, 0.2);
        glTexCoord2f(1.0, 0.5); glVertex3f(-4.2, 2.8, 0.3);
        glTexCoord2f(1.0, 1.0); glVertex3f(-4.2, 3.1, 0.3);
    glEnd();

    glDisable(GL_TEXTURE_2D);
}