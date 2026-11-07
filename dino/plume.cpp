#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include <cstdlib>
#include <cmath> // pour le pi et sin cos

class Point
{
public:
    double x;
    double y;
    double z;
    float r;
    float g;
    float b;
};

// création sphère cylindrique (car pas beaucoup de faces)
const int NM = 8;
const int NP = 4;

Point pSphere[NM * (NP + 1)];
int fSphere[NM][NP][4];

void initPlume(float r, float g, float b)
{
    int i, j;
    double theta, phi;

    for (i = 0; i < NM; i++)
        for (j = 0; j <= NP; j++)
        {
            theta = i * 2 * M_PI / NM;
            phi = -M_PI / 2 + j * M_PI / NP;
            pSphere[i + NM * j].x = cos(theta) * cos(phi);
            pSphere[i + NM * j].y = sin(theta) * cos(phi);
            pSphere[i + NM * j].z = sin(phi);
            pSphere[i + NM * j].r = r;
            pSphere[i + NM * j].g = g;
            pSphere[i + NM * j].b = b;
        }

    for (i = 0; i < NM; i++)
        for (j = 0; j < NP; j++)
        {
            fSphere[i][j][0] = i + NM * j;
            fSphere[i][j][1] = (i + 1) % NM + NM * j;
            fSphere[i][j][2] = (i + 1) % NM + NM * (j + 1);
            fSphere[i][j][3] = i + NM * (j + 1);
        }
}

void dessinePlume(GLuint texObject[])
{

    int i, j;
    int a, b, c, d;               // 4 sommets de la face actuelle
    float s0, s1, t0, t1;         // bords de la case de l'image pour cette face (pour la texture)
    const float PAS_S = 1.0 / NM; // pour eviter de faire une conversion dans le calcul (int / float)
    const float PAS_T = 1.0 / NP;

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texObject[0]);
    glColor3f(1.0f, 1.0f, 1.0f);

    for (i = 0; i < NM; i++)
        for (j = 0; j < NP; j++)
        {
            a = fSphere[i][j][0];
            b = fSphere[i][j][1];
            c = fSphere[i][j][2];
            d = fSphere[i][j][3];

            s0 = i * PAS_S;
            s1 = (i+1) * PAS_S;
            t0 = j * PAS_T;
            t1 = (j+1) * PAS_T;
            glBegin(GL_POLYGON);
            glTexCoord2f(s0,t0);
            glVertex3f(pSphere[a].x, pSphere[a].y, pSphere[a].z);
            glTexCoord2f(s1,t0);
            glVertex3f(pSphere[b].x, pSphere[b].y, pSphere[b].z);
            glTexCoord2f(s1,t1);
            glVertex3f(pSphere[c].x, pSphere[c].y, pSphere[c].z);
            glTexCoord2f(s0,t1);
            glVertex3f(pSphere[d].x, pSphere[d].y, pSphere[d].z);
            glEnd();
        }
    glDisable(GL_TEXTURE_2D); 
}