#include <GL/glut.h>
#include <stdlib.h>

 // Defini ¸c~ao de cada fun ¸c~ao
 void init ( void ) {
 	
 glClearColor (1.0f , 1.0f , 1.0f , 1.0f) ; // Cor de fundo
 glOrtho (0 , 256 , 0, 256 , -1 ,1) ; // Modo de proje ¸c~ao ortogonal
 
 }

 void display ( void ){
 	
 glClear ( GL_COLOR_BUFFER_BIT ); // Limpa a janela
 glColor3f (0.8f, 0.0f, 0.0f) ; // Cor da linha
 glBegin ( GL_LINES );
 glVertex2i (100 ,100) ; // Coordenadas de in´i cio da linha
 glVertex2i (200 ,100) ; // Coordenadas de fim da linha
 glEnd () ;
 glFlush () ;
 
 }

 int main ( int argc , char ** argv ){
 	
 glutInit (& argc , argv ); // Inicializa o GLUT
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB );
 glutInitWindowSize (256 , 256) ; // Especifica as dimens ~oes da janela
 glutInitWindowPosition (100 , 100) ; // Posi ¸c~ao da janela na tela
 glutCreateWindow (" Desenhando uma linha "); // Cria a janela
 init () ;

 glutDisplayFunc ( display ) ; // Fun ¸c~ao que ser´a redesenhada pelo GLUT
 glutMainLoop () ; // Mostra todas as janelas criadas
 return 0;
 
 }
