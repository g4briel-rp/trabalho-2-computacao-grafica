#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

#define CHAO 1
#define MESA 2
#define CADEIRA 3
#define LUMINARIA 4
#define GARRAFA 5
#define TACA 6

GLUquadricObj *q;

void desenha_chao(){
    // Inicializa display lists para cria��o do ch�o
    glNewList(CHAO, GL_COMPILE);

    // Cria��o da malha formada por triangulos adjacentes e as Transforma��es geometricas utilizadas
    glPushMatrix();
    glTranslatef(-44.0, -11.5, -65.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_STRIP);
    glNormal3f(0.0, 1.0, 0.0);
    for(float y = 1.0; y < 100.0; y += 5.0){
        for(float x = 1.0; x < 100.0; x += 5.0){
            glVertex3f (x, y, 0.0);
            glVertex3f (5.0 + x, y, 0.0);
            glVertex3f (x, 5.0 + y, 0.0);
            glVertex3f (5.0 + x, 5.0 + y, 0.0);
        }
    }
    glEnd();
    glPopMatrix();

    glEndList();
}

void desenha_mesa(){
    // Inicializa display lists para cria��o da mesa
    glNewList(MESA, GL_COMPILE); // Mesa

    //Cria��o da tabua da mesa.
    glPushMatrix();
    glTranslatef(0.0, 10.0, 0.0);
    glScalef(5.0, 0.5, 10.0);
    glutSolidCube(5.0);
    glPopMatrix();

    // Cria��o do p� da mesa

    //p� esquerdo inferior
    glPushMatrix();
    glTranslatef(-8.0, -1.4, 20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //p� direito inferior
    glPushMatrix();
    glTranslatef(8.0, -1.4, 20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //p� esquerdo superior
    glPushMatrix();
    glTranslatef(-8.0, -1.4, -20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //p� direito superior
    glPushMatrix();
    glTranslatef(8.0, -1.4, -20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    glEndList();
}

void desenha_cadeiras(){
    // Inicializa display lists para cria��o das cadeiras
    glNewList(CADEIRA, GL_COMPILE);

    //cadeira da esquerda

    //p� direito inferior
    glPushMatrix();
    glTranslatef(-11.5, -6.5, 1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� direito superior
    glPushMatrix();
    glTranslatef(-16.0, -6.5, -6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� esquerdo inferior
    glPushMatrix();
    glTranslatef(-20.0, -6.5, 6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� esquerdo superior
    glPushMatrix();
    glTranslatef(-24.5, -6.5, -1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //banco
    glPushMatrix();
    glTranslatef(-18.0, 0.0, 0.0);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    //encosto
    glPushMatrix();
    glTranslatef(-20.25, 7.5, -3.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    //cadeira da direita

    //p� direito inferior
    glPushMatrix();
    glTranslatef(24.5, -6.5, 1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� direito superior
    glPushMatrix();
    glTranslatef(20.0, -6.5, -6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� esquerdo inferior
    glPushMatrix();
    glTranslatef(16.5, -6.5, 6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //p� esquerdo superior
    glPushMatrix();
    glTranslatef(11.5, -6.5, -2.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //banco
    glPushMatrix();
    glTranslatef(18.0, 0.0, 0.0);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    //encosto
    glPushMatrix();
    glTranslatef(21.75, 7.5, -2.0);
    glRotatef(60.0, 0.0, -1.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    glEndList();
}

void desenha_luminaria(){
    // Inicializa display lists para cria��o da luminaria
    glNewList(LUMINARIA, GL_COMPILE);

    //prote��o da lampada
    glPushMatrix();
    glTranslatef (-24.5, 19.5, -39.5);
    glRotatef(-160.0, 0.0, 1.0, 0.0);
    gluCylinder(q, 5.0, 1.0, 10.0, 9.0, 3.0);
    glPopMatrix();

    //haste
    glPushMatrix();
    glTranslatef(-28.0, 20.5, -50.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.0, 3.2);
    gluCylinder(q, 1.0, 1.0, 10.0, 5.0, 5.0);
    glPopMatrix();

    //p�
    glPushMatrix();
    glTranslatef (-28.0, -11.5, -50.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluDisk(q, 1.0, 3.0, 10.0, 5.0);
    glPopMatrix();

    //lampada
    glPushMatrix();
    glTranslatef (-26.5, 19.5, -45.0);
    gluSphere(q, 2.5, 10.0, 10.0);
    glPopMatrix();

    glEndList();
}

void desenha_garrafa(){
    // Inicializa display lists para cria��o da garrafa
    glNewList(GARRAFA, GL_COMPILE);

    //cilindro inferior
    glPushMatrix();
    glTranslatef(-5.0, 17.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 1.5, 1.5, 6.0, 10.0, 5.0);
    glPopMatrix();

    //cilindro mediano
    glPushMatrix();
    glTranslatef(-5.0, 20.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.5, 1.5, 3.0, 10.0, 5.0);
    glPopMatrix();

    //cilindro superior
    glPushMatrix();
    glTranslatef(-5.0, 21.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.5, 0.5, 1.0, 10.0, 5.0);
    glPopMatrix();

    //tampa
    glPushMatrix();
    glTranslatef(-5.05, 21.75, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glutSolidTorus(0.25, 0.5, 10.0, 5.0);
    glPopMatrix();

    glEndList();
}

void desenha_taca(){
    // Inicializa display lists para cria��o da ta�a
    glNewList(TACA, GL_COMPILE);

    //cilindro superior
    glPushMatrix();
    glTranslatef(0.0, 16.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 1.5, 0.15, 2.5, 10.0, 5.0);
    glPopMatrix();

    //cilindro inferior
    glPushMatrix();
    glTranslatef (0.0, 14.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.15, 0.15, 2.5, 10.0, 5.0);
    glPopMatrix();

    //base da ta�a
    glPushMatrix();
    glTranslatef (0.0, 11.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluDisk(q, 0.0, 1.0, 10.0, 5.0);
    glPopMatrix();

    glEndList();
}

void init(int option){
    GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat posicao[] = {0.0, 20.0, 25.0, 0.0};

    glClearColor (0.5, 0.5, 0.5, 0.0);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    //glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao);
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	if (option == 1)
        glShadeModel(GL_SMOOTH);
    if (option == 2)
        glShadeModel(GL_FLAT);

    q = gluNewQuadric();

    desenha_chao();
    desenha_mesa();
    desenha_cadeiras();
    desenha_luminaria();
    desenha_garrafa();
    desenha_taca();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

// Chama o display list do chao para exibi-lo
    glPushMatrix();
    glCallList(CHAO);
    glPopMatrix();

// Chama o display list da mesa para exibi-lo
    glPushMatrix();
    glCallList(MESA);
    glPopMatrix();

// Chama o display list das cadeiras para exibi-lo
    glPushMatrix();
    glCallList(CADEIRA);
    glPopMatrix();

// Chama o display list da luminaria para exibi-lo
    glPushMatrix();
    glCallList(LUMINARIA);
    glPopMatrix();

// Chama o display list da garrafa para exibi-lo
    glPushMatrix();
    glCallList(GARRAFA);
    glPopMatrix();

//Chama o display list da ta�a para exibi-lo
    glPushMatrix();
    glCallList(TACA);
    glPopMatrix();

    glutSwapBuffers();
}

void perspectiva(int w, int h){
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(70.0, (GLfloat)w/(GLfloat)h, 1.0, 200.0);
    gluLookAt(0.0, 30.0, 50.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y){
    switch(key){
        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640, 480);

    glutInitWindowPosition(100, 100);
    glutCreateWindow("smooth");
    glutDisplayFunc(display);
    init(1);
    glutReshapeFunc(perspectiva);

    glutInitWindowPosition(800, 100);
    glutCreateWindow("flat");
    glutDisplayFunc(display);
    init(2);
    glutReshapeFunc(perspectiva);

    glutKeyboardFunc(keyboard);
    glutMainLoop();
}