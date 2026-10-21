#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineCorps(){

// ==========================================
// 1. LES ACTIVATIONS INDISPENSABLES
// ==========================================
glEnable(GL_DEPTH_TEST);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

// ==========================================
// 2. LES DEUX BOUCHONS (Extr�mit�s)
// ==========================================
glColor3f(0.8f, 0.8f, 0.7f); //BEIGE
// Bouchon X = 0
glBegin(GL_POLYGON);
    glVertex3f(0.0f, 2.0f, -1.0f);
    glVertex3f(0.0f, 1.0f, -1.0f);
    glVertex3f(0.0f, 0.0f, -0.5f);
    glVertex3f(0.0f, 0.0f,  0.5f);
    glVertex3f(0.0f, 1.0f,  1.0f);
    glVertex3f(0.0f, 2.0f,  1.0f);
glEnd();

glColor3f(0.2f, 0.3f, 0.2f); // VERT
// Bouchon X = 20
glBegin(GL_POLYGON);
    glVertex3f(20.0f, 2.0f, -0.4f);
    glVertex3f(20.0f, 1.6f, -0.4f);
    glVertex3f(20.0f, 1.2f, -0.2f);
    glVertex3f(20.0f, 1.2f,  0.2f);
    glVertex3f(20.0f, 1.6f,  0.4f);
    glVertex3f(20.0f, 2.0f,  0.4f);
glEnd();

// ==========================================
// 3. LE CORPS DU CYLINDRE
// ==========================================

// ------------------------------------------
// TRON�ON 1 : De X = 0 � X = 6
// ------------------------------------------
// Le dessus du Tron�on 1
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1 (Sommet Plat Sup�rieur)
    glVertex3f(0.0f, 2.0f, -1.0f);  glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(0.0f, 2.0f, 1.0f);
    // Face 2 (Bord vertical Z max)
    glVertex3f(0.0f, 2.0f, 1.0f);   glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(0.0f, 1.0f, 1.0f);
    // Face 6 (Bord vertical Z min)
    glVertex3f(0.0f, 1.0f, -1.0f);  glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(0.0f, 2.0f, -1.0f);
glEnd();

// Le dessous du Tron�on 1
glColor3f(0.8f, 0.8f, 0.7f);//BEIGE
glBegin(GL_QUADS);
    // Face 3 (Pente inf�rieure Z max)
    glVertex3f(0.0f, 1.0f, 1.0f);   glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(0.0f, 0.0f, 0.5f);
    // Face 4 (Fond Plat Inf�rieur)
    glVertex3f(0.0f, 0.0f, 0.5f);   glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(0.0f, 0.0f, -0.5f);
    // Face 5 (Pente inf�rieure Z min)
    glVertex3f(0.0f, 0.0f, -0.5f);  glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(0.0f, 1.0f, -1.0f);
glEnd();


// ------------------------------------------
// TRON�ON 2 : De X = 6 � X = 12
// ------------------------------------------
// Le dessus du Tron�on 2
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(6.0f, 2.0f, -0.82f); glVertex3f(12.0f, 2.0f, -0.64f); glVertex3f(12.0f, 2.0f, 0.64f); glVertex3f(6.0f, 2.0f, 0.82f);
    // Face 2
    glVertex3f(6.0f, 2.0f, 0.82f);  glVertex3f(12.0f, 2.0f, 0.64f);  glVertex3f(12.0f, 1.6f, 0.64f); glVertex3f(6.0f, 1.0f, 0.82f);
    // Face 6
    glVertex3f(6.0f, 1.0f, -0.82f); glVertex3f(12.0f, 1.6f, -0.64f); glVertex3f(12.0f, 2.0f, -0.64f); glVertex3f(6.0f, 2.0f, -0.82f);
glEnd();

// Le dessous du Tron�on 2
glColor3f(0.8f, 0.8f, 0.7f);//BEIGE
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(6.0f, 1.0f, 0.82f);  glVertex3f(12.0f, 1.6f, 0.64f);  glVertex3f(12.0f, 1.2f, 0.36f); glVertex3f(6.0f, 0.0f, 0.41f);
    // Face 4
    glVertex3f(6.0f, 0.0f, 0.41f);  glVertex3f(12.0f, 1.2f, 0.36f);  glVertex3f(12.0f, 1.2f, -0.36f); glVertex3f(6.0f, 0.0f, -0.41f);
    // Face 5
    glVertex3f(6.0f, 0.0f, -0.41f); glVertex3f(12.0f, 1.2f, -0.36f); glVertex3f(12.0f, 1.6f, -0.64f); glVertex3f(6.0f, 1.0f, -0.82f);
glEnd();


// ------------------------------------------
// TRON�ON 3 : De X = 12 � X = 20
// ------------------------------------------
// Le dessus du Tron�on 3
glColor3f(0.2f, 0.3f, 0.2f); // VERT
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(12.0f, 2.0f, -0.64f); glVertex3f(20.0f, 2.0f, -0.4f);  glVertex3f(20.0f, 2.0f, 0.4f);   glVertex3f(12.0f, 2.0f, 0.64f);
    // Face 2
    glVertex3f(12.0f, 2.0f, 0.64f);  glVertex3f(20.0f, 2.0f, 0.4f);   glVertex3f(20.0f, 1.6f, 0.4f);   glVertex3f(12.0f, 1.6f, 0.64f);
    // Face 6
    glVertex3f(12.0f, 1.6f, -0.64f); glVertex3f(20.0f, 1.6f, -0.4f);  glVertex3f(20.0f, 2.0f, -0.4f);  glVertex3f(12.0f, 2.0f, -0.64f);
glEnd();

// Le dessous du Tron�on 3
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(12.0f, 1.6f, 0.64f);  glVertex3f(20.0f, 1.6f, 0.4f);   glVertex3f(20.0f, 1.2f, 0.2f);   glVertex3f(12.0f, 1.2f, 0.36f);
    // Face 4
    glVertex3f(12.0f, 1.2f, 0.36f);  glVertex3f(20.0f, 1.2f, 0.2f);   glVertex3f(20.0f, 1.2f, -0.2f);  glVertex3f(12.0f, 1.2f, -0.36f);
    // Face 5
    glVertex3f(12.0f, 1.2f, -0.36f); glVertex3f(20.0f, 1.2f, -0.2f);  glVertex3f(20.0f, 1.6f, -0.4f);  glVertex3f(12.0f, 1.6f, -0.64f);
glEnd();


// ------------------------------------------
// TRON�ON 4 : De X = 20 � X = 21 (Note: modifi� de 21 � 21 selon vos coordonn�es)
// ------------------------------------------
// Le dessus du Tron�on 4
glColor3f(0.35f, 0.3f, 0.3f); // MARRON
glBegin(GL_QUADS);
    // Face 1
    glVertex3f(20.0f, 2.0f, -0.4f); glVertex3f(21.0f, 2.0f, -0.4f);  glVertex3f(21.0f, 2.0f, 0.4f);   glVertex3f(20.0f, 2.0f, 0.4f);
    // Face 2
    glVertex3f(20.0f, 2.0f, 0.4f);  glVertex3f(21.0f, 2.0f, 0.4f);   glVertex3f(21.0f, 1.6f, 0.4f);   glVertex3f(20.0f, 1.6f, 0.4f);
    // Face 6
    glVertex3f(20.0f, 1.6f, -0.4f); glVertex3f(21.0f, 1.6f, -0.4f);  glVertex3f(21.0f, 2.0f, -0.4f);  glVertex3f(20.0f, 2.0f, -0.4f);
glEnd();

// Le dessous du Tron�on 4
glBegin(GL_QUADS);
    // Face 3
    glVertex3f(20.0f, 1.6f, 0.4f);  glVertex3f(21.0f, 1.6f, 0.4f);   glVertex3f(21.0f, 1.2f, 0.2f);   glVertex3f(20.0f, 1.2f, 0.2f);
    // Face 4
    glVertex3f(20.0f, 1.2f, 0.2f);  glVertex3f(21.0f, 1.2f, 0.2f);   glVertex3f(21.0f, 1.2f, -0.2f);  glVertex3f(20.0f, 1.2f, -0.2f);
    // Face 5
    glVertex3f(20.0f, 1.2f, -0.2f); glVertex3f(21.0f, 1.2f, -0.2f);  glVertex3f(21.0f, 1.6f, -0.4f);  glVertex3f(20.0f, 1.6f, -0.4f);
glEnd();
}
