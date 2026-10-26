#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

void dessineRepere();
void dessineCorps(GLuint texObject[]); // param pour le tableau de texture 
void dessineQueue(int i, GLuint texObject[]); // param pour le tableau de texture
void dessinePattesArriereGauche(int anim, bool marche, GLuint texObject[]); // param pour le tableau de texture
void dessinePattesArriereDroite(int anim, bool marche, GLuint texObject[]); // param pour le tableau de texture
void gestionPattesArriere(int anim, bool marche, GLuint texObject[]); // param pour le tableau de texture
void dessinePattesAvant(GLuint texObject[]); // param pour le tableau de texture
void dessineTete(GLuint texObject[]); // param pour le tableau de texture
void dessineCou(GLuint texObject[]); // param pour le tableau de texture
void dessineAile();
void dessineMimineAvant(int i);
void dessineMimineArriere(int i);
void dessineMap();
void dessineAnneau1(GLuint texObject[]); // param pour le tableau de texture
void dessineAnneau2(GLuint texObject[]); // param pour le tableau de texture
void dessineAnneau3(GLuint texObject[]); // param pour le tableau de texture
void dessineAnneau4(GLuint texObject[]); // param pour le tableau de texture
void dessineAnneau5(GLuint texObject[]); // param pour le tableau de texture
void animation1();
void animation2();
void dessineSapin();
void dessineBuche();
void initPlume(float r, float g, float b);
void dessineRangeesPlumes();
void dessinePlume(GLuint texObject[]); // param pour le tableau de texture
void plumesLeLongDuBras(float L, float cote, GLuint texObject[]); // param pour le tableau de texture
#endif // FONCTIONS_H_INCLUDED
