#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineTete()
{
// cou -> crâne 

// dessus
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-1.1f, 3.2f, -0.5f); glVertex3f(-1.8f, 3.4f, -0.8f); glVertex3f(-1.8f, 3.4f, 0.8f); glVertex3f(-1.1f, 3.2f, 0.5f);
    // Face 2
    glVertex3f(-1.1f, 3.2f, 0.5f); glVertex3f(-1.8f, 3.4f, 0.8f); glVertex3f(-1.8f, 2.8f, 0.8f); glVertex3f(-1.1f, 2.4f, 0.5f);
    // Face 6
    glVertex3f(-1.1f, 2.4f, -0.5f); glVertex3f(-1.8f, 2.8f, -0.8f); glVertex3f(-1.8f, 3.4f, -0.8f); glVertex3f(-1.1f, 3.2f, -0.5f);
glEnd();

// dessous
glColor3f(0.8f, 0.8f, 0.7f); // BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-1.1f, 2.4f, 0.5f); glVertex3f(-1.8f, 2.8f, 0.8f); glVertex3f(-1.8f, 2.1f, 0.5f); glVertex3f(-1.1f, 1.5f, 0.3f);
    // Face 4
    glVertex3f(-1.1f, 1.5f, 0.3f); glVertex3f(-1.8f, 2.1f, 0.5f); glVertex3f(-1.8f, 2.1f, -0.5f); glVertex3f(-1.1f, 1.5f, -0.3f);
    // Face 5
    glVertex3f(-1.1f, 1.5f, -0.3f); glVertex3f(-1.8f, 2.1f, -0.5f); glVertex3f(-1.8f, 2.8f, -0.8f); glVertex3f(-1.1f, 2.4f, -0.5f);
glEnd();


// crâne -> museau 

// dessus
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-1.8f, 3.4f, -0.8f); glVertex3f(-2.8f, 3.3f, -0.5f); glVertex3f(-2.8f, 3.3f, 0.5f); glVertex3f(-1.8f, 3.4f, 0.8f);
    // Face 2
    glVertex3f(-1.8f, 3.4f, 0.8f); glVertex3f(-2.8f, 3.3f, 0.5f); glVertex3f(-2.8f, 2.8f, 0.5f); glVertex3f(-1.8f, 2.8f, 0.8f);
    // Face 6
    glVertex3f(-1.8f, 2.8f, -0.8f); glVertex3f(-2.8f, 2.8f, -0.5f); glVertex3f(-2.8f, 3.3f, -0.5f); glVertex3f(-1.8f, 3.4f, -0.8f);
glEnd();

// dessous
glColor3f(0.6f, 0.0f, 0.0f); // Rouge
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-1.8f, 2.8f, 0.8f); glVertex3f(-2.8f, 2.8f, 0.5f); glVertex3f(-2.8f, 2.3f, 0.4f); glVertex3f(-1.8f, 2.1f, 0.5f);
    // Face 4
    glVertex3f(-1.8f, 2.1f, 0.5f); glVertex3f(-2.8f, 2.3f, 0.4f); glVertex3f(-2.8f, 2.3f, -0.4f); glVertex3f(-1.8f, 2.1f, -0.5f);
    // Face 5
    glVertex3f(-1.8f, 2.1f, -0.5f); glVertex3f(-2.8f, 2.3f, -0.4f); glVertex3f(-2.8f, 2.8f, -0.5f); glVertex3f(-1.8f, 2.8f, -0.8f);
glEnd();


// museau -> bout du nez

// dessus
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-2.8f, 3.3f, -0.5f); glVertex3f(-3.4f, 3.2f, -0.4f); glVertex3f(-3.4f, 3.2f, 0.4f); glVertex3f(-2.8f, 3.3f, 0.5f);
    // Face 2
    glVertex3f(-2.8f, 3.3f, 0.5f); glVertex3f(-3.4f, 3.2f, 0.4f); glVertex3f(-3.4f, 2.8f, 0.4f); glVertex3f(-2.8f, 2.8f, 0.5f);
    // Face 6
    glVertex3f(-2.8f, 2.8f, -0.5f); glVertex3f(-3.4f, 2.8f, -0.4f); glVertex3f(-3.4f, 3.2f, -0.4f); glVertex3f(-2.8f, 3.3f, -0.5f);
glEnd();

// Tache grise
glColor3f(0.2f, 0.2f, 0.2f); // Gris foncé
glBegin(GL_QUADS);
    glVertex3f(-2.8f, 3.3f, 0.49f); glVertex3f(-3.4f, 3.2f, 0.39f); glVertex3f(-3.4f, 2.8f, 0.5f); glVertex3f(-2.8f, 2.8f, 0.6f);
    glVertex3f(-2.8f, 2.8f, -0.6f); glVertex3f(-3.4f, 2.8f, -0.5f); glVertex3f(-3.4f, 3.2f, -0.39f); glVertex3f(-2.8f, 3.3f, -0.49f);
glEnd();

// dessous
glColor3f(0.6f, 0.0f, 0.0f); // Rouge
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-2.8f, 2.8f, 0.5f); glVertex3f(-3.4f, 2.8f, 0.4f); glVertex3f(-3.4f, 2.4f, 0.3f); glVertex3f(-2.8f, 2.3f, 0.4f);
    // Face 4
    glVertex3f(-2.8f, 2.3f, 0.4f); glVertex3f(-3.4f, 2.4f, 0.3f); glVertex3f(-3.4f, 2.4f, -0.3f); glVertex3f(-2.8f, 2.3f, -0.4f);
    // Face 5
    glVertex3f(-2.8f, 2.3f, -0.4f); glVertex3f(-3.4f, 2.4f, -0.3f); glVertex3f(-3.4f, 2.8f, -0.4f); glVertex3f(-2.8f, 2.8f, -0.5f);
glEnd();


// Bouchon du bout du nez
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_POLYGON);
    glVertex3f(-3.4f, 3.2f, -0.4f);
    glVertex3f(-3.4f, 2.8f, -0.4f);
    glVertex3f(-3.4f, 2.4f, -0.3f);
    glVertex3f(-3.4f, 2.4f, 0.3f);
    glVertex3f(-3.4f, 2.8f, 0.4f);
    glVertex3f(-3.4f, 3.2f, 0.4f);
glEnd();


// Oeil
glColor3f(0.0f, 0.0f, 0.0f);
glPushMatrix();
    glTranslatef(-3.0f, 3.1f, 0.5f);
    glutSolidSphere(0.1, 16, 16);
glPopMatrix();
glPushMatrix();
    glTranslatef(-3.0f, 3.1f, -0.5f);
    glutSolidSphere(0.1, 16, 16);
glPopMatrix();


// bout du nez gris

// Le dessus du Tronçon 7
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-3.4f, 3.2f, -0.4f); glVertex3f(-4.2f, 3.1f, -0.3f); glVertex3f(-4.2f, 3.1f, 0.3f); glVertex3f(-3.4f, 3.2f, 0.4f);
    // Face 2
    glVertex3f(-3.4f, 3.2f, 0.4f); glVertex3f(-4.2f, 3.1f, 0.3f); glVertex3f(-4.2f, 2.8f, 0.3f); glVertex3f(-3.4f, 2.8f, 0.4f);
    // Face 6
    glVertex3f(-3.4f, 2.8f, -0.4f); glVertex3f(-4.2f, 2.8f, -0.3f); glVertex3f(-4.2f, 3.1f, -0.3f); glVertex3f(-3.4f, 3.2f, -0.4f);
glEnd();

// Le dessous du Tronçon 7
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-3.4f, 2.8f, 0.4f); glVertex3f(-4.2f, 2.8f, 0.3f); glVertex3f(-4.2f, 2.5f, 0.2f); glVertex3f(-3.4f, 2.4f, 0.3f);
    // Face 4
    glVertex3f(-3.4f, 2.4f, 0.3f); glVertex3f(-4.2f, 2.5f, 0.2f); glVertex3f(-4.2f, 2.5f, -0.2f); glVertex3f(-3.4f, 2.4f, -0.3f);
    // Face 5
    glVertex3f(-3.4f, 2.4f, -0.3f); glVertex3f(-4.2f, 2.5f, -0.2f); glVertex3f(-4.2f, 2.8f, -0.3f); glVertex3f(-3.4f, 2.8f, -0.4f);
glEnd();


// Bouchon du bout du nez
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_POLYGON);
    glVertex3f(-4.2f, 3.1f, -0.3f);
    glVertex3f(-4.2f, 2.8f, -0.3f);
    glVertex3f(-4.2f, 2.5f, -0.2f);
    glVertex3f(-4.2f, 2.5f, 0.2f);
    glVertex3f(-4.2f, 2.8f, 0.3f);
    glVertex3f(-4.2f, 3.1f, 0.3f);
glEnd();
}

