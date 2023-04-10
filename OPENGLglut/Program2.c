/*
 click com o direito e remova o exemplo anterior do projeto
 se nao aparece multiplas definiçoes de Draw()
 esse prog configura o tamanho da janela
*/
#include <GL/glu.h>
#include <GL/glut.h>

void Draw()
{

};
int main(int C, char *V[])
{
    glutInit(&C,V);
    glutInitWindowSize(600,600);
    glutCreateWindow("OPENGLU SUPER BIBLE");
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
