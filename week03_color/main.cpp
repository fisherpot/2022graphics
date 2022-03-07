#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);/// 0.3實心茶壺

    glutSwapBuffers();///交換2倍的buffer
}

int main(int argc,char**argv)
{///進階main函式
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("Week03的視窗");

    glutDisplayFunc(display);///畫圖函示

    glutMainLoop();///迴圈

    return 0;
}
