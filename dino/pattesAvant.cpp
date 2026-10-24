#include "fonctions.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>

// L = longueur du cylindre , pour le mttre sur toute la longueur
void plumesLeLongDuBras(float L, float cote)
{
    int N = 8;   // nombre de plumes sur le bras
    for (int k = 0; k < N; k++)
    {
        glPushMatrix();
            glRotatef(cote, 0, 0, 1);                    // cote du bras (0 ou 180)
            glTranslatef(0.5, 0.0, L * (k + 0.5) / N);   // bord du cylindre
            glRotatef(-7.0 * k, 0, 1, 0);                 // éventail, plus vers l'exterieur au bout 
            glTranslatef(1.0, 0.0, 0.0);                 // la premire plume commence au bord
            glScalef(1.0, 0.1, 0.3);                     // longueur épaisseur et largeur
            glColor3f(0.35, 0.3, 0.3); // MARRON
            dessinePlume();
            glTranslatef(-1.0, 0.0, 0.0); 
            glScalef(1.0, 5.0, 2.3);                     // longueur épaisseur et largeur
            glColor3f(0.2, 0.4, 0.2); //VERT
            glutSolidCube(1.0);
            glTranslatef(-1.0, 0.0, 0.0); 
            glScalef(1.0, 0.0, 2.3);   
            glColor3f(0.2f, 0.3f, 0.2f); // VERT
            glutSolidCube(1.0);
        glPopMatrix();
    }
}

void dessinePattesAvant(){
    for(int i = -1; i < 2; i=i+2){
        int cote;
        if (i == 1) {
            cote = 0;
        } else {
            cote = 180;
        }
        glPushMatrix();
            glRotatef(50 * i, 1, 0, 0);
            glPushMatrix();
                glTranslatef(0.5, 1.5, 0.0);//z = 0.5 quand bras oouverts
                glRotatef(-90 + 70 * i, 0, -1, 0);
                glColor3f(0.2f, 0.3f, 0.2f); // VERT
                glutSolidCylinder(0.5, 4.0, 6.0, 10.0);
                glTranslatef(0.0, 0.6, 0.0);
                plumesLeLongDuBras(4.0, cote);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(1.9, 1.5, 3.3 * i);
                glRotatef(90 - 50 * i, 0, -1, 0);
                glColor3f(0.2f, 0.3f, 0.2f); // VERT
                glutSolidCylinder(0.5, 4.0, 6.0, 10.0);
                glTranslatef(0.0, 0.6, 0.0);
                glScalef(1.5, 1.0, 2.0);
                plumesLeLongDuBras(4.0, cote);
            glPopMatrix();

            dessineMimineAvant(i);
        glPopMatrix();
    }
}
