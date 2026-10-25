#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

void dessineRepere();
void dessineCorps(GLuint texObject[]); // param pour le tableau de texture 
void dessineQueue(int i);
void dessinePattesArriereGauche(int anim, bool marche);
void dessinePattesArriereDroite(int anim, bool marche);
void gestionPattesArriere(int anim, bool marche);
void dessinePattesAvant();
void dessineTete();
void dessineCou();
void dessineAile();
void dessineMimineAvant(int i);
void dessineMimineArriere(int i);
void dessineMap();
void dessineAnneau1();
void dessineAnneau2();
void dessineAnneau3();
void dessineAnneau4();
void dessineAnneau5();
void animation1();
void animation2();
void dessineSapin();
void dessineBuche();
void initPlume(float r, float g, float b);
void dessineRangeesPlumes();
void dessinePlume();
void plumesLeLongDuBras(float L, float cote);

#endif // FONCTIONS_H_INCLUDED
