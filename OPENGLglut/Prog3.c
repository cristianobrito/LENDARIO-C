/*
  posicao da janela
*/
#include <GL/glu.h>
#include <GL/glut.h>

/* registro da janela */
void Draw()
{

};
int main(int C, char *V[])
{
    glutInit(&C,V);
    glutInitWindowPosition(100, 150);       // posicao da janela
    glutInitWindowSize(600,600);            // tamanho da janela
    glutCreateWindow("OPENGLU SUPER BIBLE");
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

