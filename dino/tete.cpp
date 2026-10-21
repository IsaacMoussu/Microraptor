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
    glVertex3f(-1.125f, 3.2f, -0.5f);  glVertex3f(-1.775f, 3.4f, -0.8f);  glVertex3f(-1.775f, 3.4f, 0.8f);   glVertex3f(-1.125f, 3.2f, 0.5f);
    // Face 2
    glVertex3f(-1.125f, 3.2f, 0.5f);   glVertex3f(-1.775f, 3.4f, 0.8f);   glVertex3f(-1.775f, 2.75f, 0.8f);  glVertex3f(-1.125f, 2.35f, 0.5f);
    // Face 6
    glVertex3f(-1.125f, 2.35f, -0.5f); glVertex3f(-1.775f, 2.75f, -0.8f); glVertex3f(-1.775f, 3.4f, -0.8f);  glVertex3f(-1.125f, 3.2f, -0.5f);
glEnd();

// dessous
glColor3f(0.8f, 0.8f, 0.7f); // BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-1.125f, 2.35f, 0.5f);  glVertex3f(-1.775f, 2.75f, 0.8f);  glVertex3f(-1.775f, 2.05f, 0.45f);  glVertex3f(-1.125f, 1.5f, 0.25f);
    // Face 4
    glVertex3f(-1.125f, 1.5f, 0.25f);  glVertex3f(-1.775f, 2.05f, 0.45f); glVertex3f(-1.775f, 2.05f, -0.45f); glVertex3f(-1.125f, 1.5f, -0.25f);
    // Face 5
    glVertex3f(-1.125f, 1.5f, -0.25f); glVertex3f(-1.775f, 2.05f, -0.45f); glVertex3f(-1.775f, 2.75f, -0.8f);  glVertex3f(-1.125f, 2.35f, -0.5f);
glEnd();


// crâne -> museau 

// dessus
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-1.775f, 3.4f, -0.8f);  glVertex3f(-2.775f, 3.3f, -0.5f);  glVertex3f(-2.775f, 3.3f, 0.5f);   glVertex3f(-1.775f, 3.4f, 0.8f);
    // Face 2
    glVertex3f(-1.775f, 3.4f, 0.8f);   glVertex3f(-2.775f, 3.3f, 0.5f);   glVertex3f(-2.775f, 2.75f, 0.5f);  glVertex3f(-1.775f, 2.75f, 0.8f);
    // Face 6
    glVertex3f(-1.775f, 2.75f, -0.8f); glVertex3f(-2.775f, 2.75f, -0.5f); glVertex3f(-2.775f, 3.3f, -0.5f);  glVertex3f(-1.775f, 3.4f, -0.8f);
glEnd();

// dessous
glColor3f(0.6f, 0.0f, 0.0f); // Rouge
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-1.775f, 2.75f, 0.8f);  glVertex3f(-2.775f, 2.75f, 0.5f);  glVertex3f(-2.775f, 2.25f, 0.35f);  glVertex3f(-1.775f, 2.05f, 0.45f);
    // Face 4
    glVertex3f(-1.775f, 2.05f, 0.45f); glVertex3f(-2.775f, 2.25f, 0.35f); glVertex3f(-2.775f, 2.25f, -0.35f); glVertex3f(-1.775f, 2.05f, -0.45f);
    // Face 5
    glVertex3f(-1.775f, 2.05f, -0.45f); glVertex3f(-2.775f, 2.25f, -0.35f); glVertex3f(-2.775f, 2.75f, -0.5f); glVertex3f(-1.775f, 2.75f, -0.8f);
glEnd();


// museau -> bout du nez

// dessus
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-2.775f, 3.31f, -0.5f);  glVertex3f(-3.375f, 3.15f, -0.35f); glVertex3f(-3.375f, 3.15f, 0.35f);  glVertex3f(-2.775f, 3.31f, 0.5f);
    // Face 2
    glVertex3f(-2.775f, 3.3f, 0.5f);   glVertex3f(-3.375f, 3.15f, 0.35f);  glVertex3f(-3.375f, 2.75f, 0.35f);  glVertex3f(-2.775f, 2.75f, 0.5f);
    // Face 6
    glVertex3f(-2.775f, 2.75f, -0.5f); glVertex3f(-3.375f, 2.75f, -0.35f); glVertex3f(-3.375f, 3.15f, -0.35f); glVertex3f(-2.775f, 3.3f, -0.5f);
glEnd();

//Tache grise
glColor3f(0.15f, 0.15f, 0.15f); // Gris foncé
glBegin(GL_QUADS);
    glVertex3f(-2.775f, 3.3f, -0.51f);  glVertex3f(-3.375f, 3.15f, -0.35f); glVertex3f(-3.375f, 3.15f, 0.35f);  glVertex3f(-2.775f, 3.3f, 0.51f);
    // Face 2
    glVertex3f(-2.775f, 3.3f, 0.51f);   glVertex3f(-3.375f, 3.15f, 0.35f);  glVertex3f(-3.375f, 2.75f, 0.35f);  glVertex3f(-2.775f, 2.75f, 0.51f);
    // Face 6
    glVertex3f(-2.775f, 2.75f, -0.51f); glVertex3f(-3.375f, 2.75f, -0.35f); glVertex3f(-3.375f, 3.15f, -0.35f); glVertex3f(-2.775f, 3.3f, -0.51f);
glEnd();

// dssous
glColor3f(0.6f, 0.0f, 0.0f); // Rouge
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-2.775f, 2.75f, 0.5f);  glVertex3f(-3.375f, 2.75f, 0.35f);  glVertex3f(-3.375f, 2.4f, 0.25f);  glVertex3f(-2.775f, 2.25f, 0.35f);
    // Face 4
    glVertex3f(-2.775f, 2.25f, 0.35f); glVertex3f(-3.375f, 2.4f, 0.25f);   glVertex3f(-3.375f, 2.4f, -0.25f); glVertex3f(-2.775f, 2.25f, -0.35f);
    // Face 5
    glVertex3f(-2.775f, 2.25f, -0.35f); glVertex3f(-3.375f, 2.4f, -0.25f); glVertex3f(-3.375f, 2.75f, -0.35f); glVertex3f(-2.775f, 2.75f, -0.5f);
glEnd();


// Bouchon du bout du nez X = -3.375
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_POLYGON);
    glVertex3f(-3.375f, 3.15f, -0.35f);
    glVertex3f(-3.375f, 2.75f, -0.35f);
    glVertex3f(-3.375f, 2.4f,  -0.25f);
    glVertex3f(-3.375f, 2.4f,   0.25f);
    glVertex3f(-3.375f, 2.75f,  0.35f);
    glVertex3f(-3.375f, 3.15f,  0.35f);
glEnd();


// Oeil
glColor3f(0.0f, 0.0f, 0.0f);
glPushMatrix();
    glTranslatef(-3.0f, 3.08f, 0.45f);
    glutSolidSphere(0.08, 16, 16);
glPopMatrix();
glPushMatrix();
    glTranslatef(-3.0f, 3.08f, -0.45f);
    glutSolidSphere(0.08, 16, 16);
glPopMatrix();


// bout du nez gris

// Le dessus du Tronçon 7
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-3.375f, 3.15f, -0.35f); glVertex3f(-4.2f, 3.1f, -0.3f);  glVertex3f(-4.2f, 3.1f, 0.3f);   glVertex3f(-3.375f, 3.15f, 0.35f);
    // Face 2
    glVertex3f(-3.375f, 3.15f, 0.35f);  glVertex3f(-4.2f, 3.1f, 0.3f);   glVertex3f(-4.2f, 2.75f, 0.3f);  glVertex3f(-3.375f, 2.75f, 0.35f);
    // Face 6
    glVertex3f(-3.375f, 2.75f, -0.35f); glVertex3f(-4.2f, 2.75f, -0.3f); glVertex3f(-4.2f, 3.1f, -0.3f);  glVertex3f(-3.375f, 3.15f, -0.35f);
glEnd();

// Le dessous du Tronçon 7
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-3.375f, 2.75f, 0.35f);  glVertex3f(-4.2f, 2.75f, 0.3f);  glVertex3f(-4.2f, 2.45f, 0.2f);  glVertex3f(-3.375f, 2.4f, 0.25f);
    // Face 4
    glVertex3f(-3.375f, 2.4f, 0.25f);   glVertex3f(-4.2f, 2.45f, 0.2f);  glVertex3f(-4.2f, 2.45f, -0.2f); glVertex3f(-3.375f, 2.4f, -0.25f);
    // Face 5
    glVertex3f(-3.375f, 2.4f, -0.25f);  glVertex3f(-4.2f, 2.45f, -0.2f); glVertex3f(-4.2f, 2.75f, -0.3f); glVertex3f(-3.375f, 2.75f, -0.35f);
glEnd();


// Bouchon du bout du nez 
glColor3f(0.3f, 0.3f, 0.3f); // GRIS FONCÉ
glBegin(GL_POLYGON);
    glVertex3f(-4.2f, 3.1f,  -0.3f);
    glVertex3f(-4.2f, 2.75f, -0.3f);
    glVertex3f(-4.2f, 2.45f, -0.2f);
    glVertex3f(-4.2f, 2.45f,  0.2f);
    glVertex3f(-4.2f, 2.75f,  0.3f);
    glVertex3f(-4.2f, 3.1f,   0.3f);
glEnd();
}

