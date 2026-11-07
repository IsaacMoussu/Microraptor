#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

void dessineRepere();
void dessineCorps(GLuint texObject[]); // param pour le tableau de texture 
void dessineQueue(int i, GLuint texObject[]); 
void dessinePattesArriereGauche(int anim, bool marche, GLuint texObject[]); 
void dessinePattesArriereDroite(int anim, bool marche, GLuint texObject[]); 
void gestionPattesArriere(int anim, bool marche, GLuint texObject[]); 
void dessinePattesAvant(GLuint texObject[]); 
void dessineTete(GLuint texObject[]); 
void dessineCou(GLuint texObject[]); 
void dessineAile();
void dessineMimineAvant(int i);
void dessineMimineArriere(int i);
void dessineMap();
void dessineAnneau1(GLuint texObject[]); 
void dessineAnneau2(GLuint texObject[]); 
void dessineAnneau3(GLuint texObject[]); 
void dessineAnneau4(GLuint texObject[]); 
void dessineAnneau5(GLuint texObject[]); 
void animation1();
void animation2();
void dessineSapin();
void dessineBuche();
void initPlume(float r, float g, float b);
void dessineRangeesPlumes();
void dessinePlume(GLuint texObject[]); 
void plumesLeLongDuBras(float L, float cote, GLuint texObject[]);
#endif 
