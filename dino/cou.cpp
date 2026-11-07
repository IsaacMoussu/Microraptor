#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCou(GLuint texObject[])
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glColor3f(1.0, 1.0, 1.0);

    // dessus 1
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);

    // Face 1 
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 2.0, -1.0);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 2.4, -0.8);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 2.4, 0.8);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 2.0, 1.0);

    // Face 2 
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 2.0, 1.0);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 2.4, 0.8);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 1.5, 0.8);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);

    // Face 6 
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 1.0, -1.0);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 1.5, -0.8);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 2.4, -0.8);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 2.0, -1.0);
    glEnd();

    // dessous 1
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);

    // Face 3
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 1.0, 1.0);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 1.5, 0.8);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 0.5, 0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 0.0, 0.5);

    // Face 4 
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.5);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 0.5, 0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 0.5, -0.4);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 0.0, -0.5);

    // Face 5 
    glTexCoord2f(0.0, 0.0);
    glVertex3f(0.0, 0.0, -0.5);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.4, 0.5, -0.4);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.4, 1.5, -0.8);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    // dessus 2
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);

    // Face 1
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 2.4, -0.8);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 2.8, -0.6);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 2.8, 0.6);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 2.4, 0.8);

    // Face 2
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 2.4, 0.8);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 2.8, 0.6);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 1.9, 0.6);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 1.5, 0.8);

    // Face 6
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 1.5, -0.8);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 1.9, -0.6);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 2.8, -0.6);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 2.4, -0.8);
    glEnd();

    // dessous 2
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);

    // Face 3
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 1.5, 0.8);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 1.9, 0.6);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 1.0, 0.3);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 0.5, 0.4);

    // Face 4
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 0.5, 0.4);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 1.0, 0.3);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 1.0, -0.3);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 0.5, -0.4);

    // Face 5
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.4, 0.5, -0.4);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-0.8, 1.0, -0.3);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-0.8, 1.9, -0.6);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.4, 1.5, -0.8);
    glEnd();

    // dessus 3
    glColor3f(0.2, 0.3, 0.2); // VERT
    glBegin(GL_QUADS);

    // Face 1
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 2.8, -0.6);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 3.2, -0.5);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 3.2, 0.5);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 2.8, 0.6);

    // Face 2
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 2.8, 0.6);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 3.2, 0.5);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 2.4, 0.5);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 1.9, 0.6);

    // Face 6
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 1.9, -0.6);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 2.4, -0.5);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 3.2, -0.5);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 2.8, -0.6);
    glEnd();

    // dessous 3
    glColor3f(0.8, 0.8, 0.7); // BEIGE
    glBegin(GL_QUADS);

    // Face 3
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 1.9, 0.6);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 2.4, 0.5);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 1.5, 0.3);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 1.0, 0.3);

    // Face 4
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 1.0, 0.3);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 1.5, 0.3);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 1.5, -0.3);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 1.0, -0.3);

    // Face 5
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-0.8, 1.0, -0.3);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(-1.1, 1.5, -0.3);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(-1.1, 2.4, -0.5);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-0.8, 1.9, -0.6);
    glEnd();

    glDisable(GL_TEXTURE_2D);
}