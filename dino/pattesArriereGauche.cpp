#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

void dessinePattesArriereGauche(int anim, bool marche){

    if(marche){
        int motif[] = {0, -1, -2, -1, 0, 1, 2, 1};
        float deplacementX1[] = {0.0, -0.8, -1.5, -0.8, 0.0, 1.0, 1.8, 1.0};
        float deplacementZ1[] = {0.0, -0.2, -0.7, -0.2, 0.0, 0.5, 0.7, 0.5};
        float deplacementX2[] = {0.0, -0.2, -0.5, -0.2, 0.0, 0.35, 0.45, 0.35};
        float deplacementZ2[] = {0.0, -0.7, -1.9, -0.7, 0.0, 1.2, 1.8, 1.2};
        float deplacementX3[] = {0.0, -1.0, -2.2, -1.0, 0.0, 1.25, 2.3, 1.25};
        float deplacementZ3[] = {0.0, -1.0, -2.5, -1.0, 0.0, 1.0, 1.9, 1.0};
    } else {
        int motif[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementX1[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementZ1[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementX2[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementZ2[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementX3[] = {0, 0, 0, 0, 0, 0, 0, 0};
        float deplacementZ3[] = {0, 0, 0, 0, 0, 0, 0, 0};
    }

        glColor3f(0.2f, 0.3f, 0.2f); // VERT
        glPushMatrix();
            glTranslatef(-8.0, 0.0, 0.0);
            glRotatef(70, 1, 0, 0);
            glPushMatrix();
                glTranslatef(8, 1.0, -0.5);//z = 0.5 quand bras ouverts
                glRotatef(20 - 10 * motif[anim], 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
                glTranslatef(0.0, 0.6, -1.0);
                glScalef(1.5, 1.0, 1.0);
                plumesLeLongDuBras(5.0, 0.0);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(6.2 + deplacementX1[anim], 1.0, 3.7 + deplacementZ1[anim]);
                glRotatef(-40 + 10 * motif[anim], 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
                glTranslatef(1.0, 0.6, 0.3);
               glRotatef(-30, 0, 1, 0);
               plumesLeLongDuBras(5.0, 0.0);
            glPopMatrix();
            glColor3f(0.35f, 0.3f, 0.3f); // MARRON
            glPushMatrix();
                glTranslatef(9.3 + deplacementX2[anim], 1.0, 7.2 + deplacementZ2[anim]);
                glRotatef(10 - 10 * motif[anim], 0, -1, 0);
                glutSolidCylinder(0.5, 5.0, 6.0, 10.0);
            glPopMatrix();
            glPushMatrix();
            glTranslatef(deplacementX3[anim], 0.0, deplacementZ3[anim]);
                glPushMatrix();
                    glTranslatef(8.4, 0.9, 12.3);
                    glRotatef(90, 0, 0, 1);
                    glRotatef(160, 0, 1, 0);
                    glScalef(1.0, 0.5, 0.5);
                    glutSolidSphere(1.0, 8.0, 8.0);
                glPopMatrix();

                dessineMimineArriere(1);
            glPopMatrix();
        glPopMatrix();

}
