#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void gestionPattesArriere(int anim, bool marche, GLuint texObject[]){

    float motif1[] = {0, 1.5, 3, 1.5, 0, -1, -2, -1};
    float motif2[] = {0, -1, -2, -1, 0, 1.5, 3, 1.5};

    glPushMatrix();
        glTranslatef(8.0, 0.0, 0.0);
        if(marche)
            glRotatef(15 * motif1[anim], 0, 0, 1);
        dessinePattesArriereGauche(anim, marche, texObject);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(8.0, 0.0, 0.0);
        if(marche)
            glRotatef(15 * motif2[anim], 0, 0, 1);
        dessinePattesArriereDroite(anim, marche, texObject);
    glPopMatrix();


}
