#include <windows.h>
#include <GL/glut.h>

void init() {
   glClearColor(1.0, 1.0, 1.0, 0.0);
   glMatrixMode(GL_PROJECTION);
   gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void display(void) {
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 0.0, 0.0); // Define a cor da linha como vermelha
   
   // CABEÇA
   glPointSize(50.0);
   glBegin(GL_POINTS);
      glVertex2i(100, 120);
   glEnd();
   // CORPO
   glBegin(GL_LINES);
      glVertex2i(100, 120);
      glVertex2i(100, 50);
   //BRAÇO DIREITO
   glBegin(GL_LINES);
      glVertex2i(100, 100);
      glVertex2i(60, 90);
   // BRAÇO ESQUERDO
   glBegin(GL_LINES);
      glVertex2i(100, 100);
      glVertex2i(140, 90);
   // PERNA ESQUERDA
   glBegin(GL_LINES);
      glVertex2i(100, 50);
      glVertex2i(140, 20);
   // PERNA DIREITA
   glBegin(GL_LINES);
      glVertex2i(100, 50);
      glVertex2i(60, 20);

   glEnd();
   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(400, 300);
   glutInitWindowPosition(200, 0);
   glutCreateWindow("boneco");
   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}