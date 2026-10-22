#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCou(){

// dessus 1
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1 (Sommet Plat Supérieur)
    glVertex3f(0.0f, 2.0f, -1.0f); glVertex3f(-0.4f, 2.4f, -0.8f); glVertex3f(-0.4f, 2.4f, 0.8f); glVertex3f(0.0f, 2.0f, 1.0f);
    // Face 2 (Bord vertical Z max)
    glVertex3f(0.0f, 2.0f, 1.0f); glVertex3f(-0.4f, 2.4f, 0.8f); glVertex3f(-0.4f, 1.5f, 0.8f); glVertex3f(0.0f, 1.0f, 1.0f);
    // Face 6 (Bord vertical Z min)
    glVertex3f(0.0f, 1.0f, -1.0f); glVertex3f(-0.4f, 1.5f, -0.8f); glVertex3f(-0.4f, 2.4f, -0.8f); glVertex3f(0.0f, 2.0f, -1.0f);
glEnd();

// dessous 1
glColor3f(0.8f, 0.8f, 0.7f); // BEIGE
glBegin(GL_QUADS);
    // Face 3 (Pente inférieure Z max)
    glVertex3f(0.0f, 1.0f, 1.0f); glVertex3f(-0.4f, 1.5f, 0.8f); glVertex3f(-0.4f, 0.5f, 0.4f); glVertex3f(0.0f, 0.0f, 0.5f);
    // Face 4 (Fond Plat Inférieur)
    glVertex3f(0.0f, 0.0f, 0.5f); glVertex3f(-0.4f, 0.5f, 0.4f); glVertex3f(-0.4f, 0.5f, -0.4f); glVertex3f(0.0f, 0.0f, -0.5f);
    // Face 5 (Pente inférieure Z min)
    glVertex3f(0.0f, 0.0f, -0.5f); glVertex3f(-0.4f, 0.5f, -0.4f); glVertex3f(-0.4f, 1.5f, -0.8f); glVertex3f(0.0f, 1.0f, -1.0f);
glEnd();


// dessus 2
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-0.4f, 2.4f, -0.8f); glVertex3f(-0.8f, 2.8f, -0.6f); glVertex3f(-0.8f, 2.8f, 0.6f); glVertex3f(-0.4f, 2.4f, 0.8f);
    // Face 2
    glVertex3f(-0.4f, 2.4f, 0.8f); glVertex3f(-0.8f, 2.8f, 0.6f); glVertex3f(-0.8f, 1.9f, 0.6f); glVertex3f(-0.4f, 1.5f, 0.8f);
    // Face 6
    glVertex3f(-0.4f, 1.5f, -0.8f); glVertex3f(-0.8f, 1.9f, -0.6f); glVertex3f(-0.8f, 2.8f, -0.6f); glVertex3f(-0.4f, 2.4f, -0.8f);
glEnd();

// dessous 2
glColor3f(0.8f, 0.8f, 0.7f); // BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-0.4f, 1.5f, 0.8f); glVertex3f(-0.8f, 1.9f, 0.6f); glVertex3f(-0.8f, 1.0f, 0.3f); glVertex3f(-0.4f, 0.5f, 0.4f);
    // Face 4
    glVertex3f(-0.4f, 0.5f, 0.4f); glVertex3f(-0.8f, 1.0f, 0.3f); glVertex3f(-0.8f, 1.0f, -0.3f); glVertex3f(-0.4f, 0.5f, -0.4f);
    // Face 5
    glVertex3f(-0.4f, 0.5f, -0.4f); glVertex3f(-0.8f, 1.0f, -0.3f); glVertex3f(-0.8f, 1.9f, -0.6f); glVertex3f(-0.4f, 1.5f, -0.8f);
glEnd();


// dessus 3
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(-0.8f, 2.8f, -0.6f); glVertex3f(-1.1f, 3.2f, -0.5f); glVertex3f(-1.1f, 3.2f, 0.5f); glVertex3f(-0.8f, 2.8f, 0.6f);
    // Face 2
    glVertex3f(-0.8f, 2.8f, 0.6f); glVertex3f(-1.1f, 3.2f, 0.5f); glVertex3f(-1.1f, 2.4f, 0.5f); glVertex3f(-0.8f, 1.9f, 0.6f);
    // Face 6
    glVertex3f(-0.8f, 1.9f, -0.6f); glVertex3f(-1.1f, 2.4f, -0.5f); glVertex3f(-1.1f, 3.2f, -0.5f); glVertex3f(-0.8f, 2.8f, -0.6f);
glEnd();

// dessous 3
glColor3f(0.8f, 0.8f, 0.7f); // BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(-0.8f, 1.9f, 0.6f); glVertex3f(-1.1f, 2.4f, 0.5f); glVertex3f(-1.1f, 1.5f, 0.3f); glVertex3f(-0.8f, 1.0f, 0.3f);
    // Face 4
    glVertex3f(-0.8f, 1.0f, 0.3f); glVertex3f(-1.1f, 1.5f, 0.3f); glVertex3f(-1.1f, 1.5f, -0.3f); glVertex3f(-0.8f, 1.0f, -0.3f);
    // Face 5
    glVertex3f(-0.8f, 1.0f, -0.3f); glVertex3f(-1.1f, 1.5f, -0.3f); glVertex3f(-1.1f, 2.4f, -0.5f); glVertex3f(-0.8f, 1.9f, -0.6f);
glEnd();
}