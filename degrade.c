#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void init() {
   glClearColor(0.0, 0.0, 0.0, 0.0);
   glMatrixMode(GL_PROJECTION);
   gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void display(void) {
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 0.0, 0.0); // Define a cor da linha como vermelha
   glBegin(GL_TRIANGLES);
      glVertex2i(170, 20);
      glColor3f(0.0, 1.0, 0.0);
      glVertex2i(30, 20);
      glColor3f(0.0, 0.0, 1.0);
      glVertex2i(100, 130);
   glEnd();
   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(400, 300);
   glutInitWindowPosition(200, 0);
   glutCreateWindow("degrade");
   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}