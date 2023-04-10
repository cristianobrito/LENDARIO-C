/*
  Programa cria uma janela basica
  observe que os passos est;ao no pdf de como
  chegar até aqui
*/
#include <GL/glu.h>
#include <GL/glut.h>

void Draw()
{

}
int main(int C, char *V[])
{
    glutInit(&C,V);
    glutCreateWindow("OPENGLU SUPER BIBLE");
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
