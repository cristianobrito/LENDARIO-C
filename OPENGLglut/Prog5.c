#include <GL/glu.h>
#include <GL/glut.h>

void MyInit()
{
   glClearColor(0,0,0,1);      // cores da janela
   glColor3f(1,0,0);           // cor da janela
}
void Draw()
{
  glClear(GL_COLOR_BUFFER_BIT);// limpando o buffer do background
  glPointSize(10);             // tamanho dos pontos
  glBegin(GL_LINES);          // desenhando points
    glVertex2d(-0.5, 0.5);     // coordenadas cartesianas
    glVertex2d( 0.5, 0.5);
    glVertex2d( 0.5,-0.5);
    glVertex2d(-0.5,-0.5);
  glEnd();
  glFlush();                   // chama as func callbacks
}

int main(int C, char *V[])
{
   glutInit(&C,V);
   glutInitWindowPosition(250,50);
   glutInitWindowSize(500,500);
   glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
   glutCreateWindow("BASIC OPENGL");

   MyInit();
   glutDisplayFunc(Draw);
   glutMainLoop();
   return 0;
}

