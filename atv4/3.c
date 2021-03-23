#include <GL/glut.h>

GLfloat x1 = 100.0f;
 GLfloat y2 = 150.0f;
GLsizei rsize = 50;

// Tamanho do incremento nas dire ¸c~oes x e y
// (n´u mero de pixels para se mover a cada intervalo de tempo )
GLfloat xstep = 3.0f;
GLfloat ystep = 3.0f;

// Largura e altura da janela
GLfloat windowWidth ;
GLfloat windowHeight ;

// Fun¸c~ao chamada para fazer o desenho
void Desenha ( void ) {
    glMatrixMode ( GL_MODELVIEW ) ;
    glLoadIdentity () ;

    glClear ( GL_COLOR_BUFFER_BIT );

    glColor3f (1.0f , 0.0f , 0.0f);

    glBegin ( GL_QUADS );
    glVertex2i (x1 , y2+ rsize );
    glVertex2i (x1 , y2);

    glColor3f (0.0f , 0.0f , 1.f);
    glVertex2i ( x1 + rsize , y2);
    glVertex2i ( x1 + rsize , y2+ rsize );
    glEnd () ;

    glutSwapBuffers () ;
}

// Fun¸c~ao callback chamada pela GLUT a cada intervalo de tempo
void Timer (int value ) {

    // Muda a dire ¸c~ao quando chega na borda esquerda ou direita
    if( y2 > windowWidth - rsize || y2 < 0)
        ystep = - ystep ;

    // Move o quadrado horizontalmente
    y2 += ystep ;

    // Redesenha o quadrado com as novas coordenadas
    glutPostRedisplay () ;
    glutTimerFunc (10 , Timer , 1) ;
}

void Inicializa ( void ) {
    glClearColor (0.0f , 0.0f , 0.0f , 1.0f) ;
}

void MudaTamanhoJanela ( GLsizei w , GLsizei h ) {
    // Para evitar a divis ~ao por zero
    if(h == 0)
        h = 1;

    glViewport (0 , 0, w , h);

    // Inicializa o sistema de coordenadas
    glMatrixMode ( GL_PROJECTION );
    glLoadIdentity () ;
    if (w <= h) {
        windowHeight = 100.0f*h /w;
        windowWidth = 100.0f ;
    }
    else {
        windowWidth = 250.0f *w/h ;
        windowHeight = 250.0f;
    }

    gluOrtho2D (0.0f , windowWidth , 0.0f , windowHeight );
}

int main ( int argc , char ** argv ) {
    glutInit (& argc , argv ); // Inicializa o GLUT
    glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize (400 ,350) ;
    glutInitWindowPosition (10 ,10) ;
    glutCreateWindow (" Anima ") ;
    glutDisplayFunc ( Desenha ) ;
    glutReshapeFunc ( MudaTamanhoJanela );
    glutTimerFunc (10 , Timer , 1) ;
    Inicializa () ;
    glutMainLoop () ;
}
