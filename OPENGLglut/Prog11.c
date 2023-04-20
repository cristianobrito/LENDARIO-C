#include <GL/glu.h>
#include <GL/glut.h>

GLfloat T = 0;
void Spin()
{
  T=T+0.5;
  if(T > 360)
      T=0;
      glutPostRedisplay();
}

void MyInit()
{
    glClearColor(0,0,0,1);      // cores da janela
    glColor3f(1,0,0);           // cor da janela
}
void Face(GLfloat A[], GLfloat B[], GLfloat C[], GLfloat D[])
{
    glBegin(GL_POLYGON);
        glVertex3fv(A);
        glVertex3fv(B);
        glVertex3fv(C);
        glVertex3fv(D);
    glEnd();

}

void Cube(GLfloat V0[], GLfloat V1[], GLfloat V2[], GLfloat V3[], GLfloat V4[], GLfloat V5[], GLfloat V6[], GLfloat V7[])
{
    glColor3f(1,0,0);
    Face(V0,V1,V2,V3);
    glColor3f(0,1,0);
    Face(V4,V5,V6,V7);
}
void Draw()
{
    GLfloat V[8][3] =
    {
        {-0.5, 0.5, 0.5},     // coordenadas cartesianas
        { 0.5, 0.5, 0.5},
        { 0.5,-0.5, 0.5},
        {-0.5,-0.5, 0.5},

        {-0.5, 0.5,-0.5},     // coordenadas cartesianas
        { 0.5, 0.5,-0.5},
        { 0.5,-0.5,-0.5},
        {-0.5,-0.5,-0.5}
    };
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);// limpando o buffer do background
    glLoadIdentity();
    glRotatef(T,0,1,0);
    Cube(V[0], V[1], V[2], V[3], V[4], V[5], V[6], V[7]);
    glutSwapBuffers();
    glFlush();                   // chama as func callbacks
}

int main(int C, char *V[])
{
    glutInit(&C,V);
    glutInitWindowPosition(250,50);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("BASIC OPENGL");

    MyInit();
    glutDisplayFunc(Draw);
    glutIdleFunc(Spin);
    glutMainLoop();
    return 0;
}




