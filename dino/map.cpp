#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessineMap(){

    glColor3f(0.7f, 0.6f, 0.5f); //SABLE
    glPushMatrix();
    glTranslatef(0.0, -12.2, 0.0);
        glScaled(150.0, 1.0, 150.0);
        glutSolidCube(1.0);
    glPopMatrix();

}
