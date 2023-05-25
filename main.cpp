#include<windows.h>
#include<GL/glut.h>

void init() {
	glClearColor(0.4, 0.8, 0.9, 1);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-40, 40, -44, 40, -40, 40);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0.6, 0);
	glRectf(-40, -18, 40, -43);

	glColor3f(0.480, 0.304, 0.298);
	glRectf(-40, -23, 40, -44);

	glColor3f(0.7, 0.6, 0.6);
	glRectf(-10, -21, -6.5, -31);
	glRectf(-12, -28, -7, -44);

	//glColor3f(1,0.5,1);
	//glRectf(7,-28,12,-44);
	glBegin(GL_QUADS);
	//third side
	glColor3f(0.25, 0.25, 0.25);
	glVertex2f(-8.3, -21.5);
	glVertex2f(-6.7, 36.5);
	glVertex2f(-4, 36);
	glVertex2f(-2.5, -22);
	glEnd();

	glPushMatrix();
	glColor3f(0.840, 0.722, 0.722);
	glTranslatef(-4.58, 37.5, 0);
	glutSolidCone(2, 2, 20, 20);

	glColor3f(0.4, 0.8, 0.9);
	glTranslatef(2.2, -1.6, 0);
	glutSolidCone(1, 2, 20, 20);
	//glTranslatef(-4.4, 0, 0);
	//glutSolidCone(1, 2, 20, 20);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.4, 0.8, 0.9);
	glTranslatef(-6.48, 36.3, 0);
	GLUquadricObj* objj2 = gluNewQuadric();
	gluPartialDisk(objj2, 0, 0.7, 50, 90, 105, -180);
	glPopMatrix();


	glBegin(GL_QUADS);
	glColor3f(0.680, 0.666, 0.669);//RS from levels
	glVertex2f(7, -28);
	glVertex2f(7, -44);
	glVertex2f(12, -44);
	glVertex2f(12, -29);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	//RS from the level HL
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(7, -28);
	glVertex2f(12, -29);
	glVertex2f(7, -31);
	glVertex2f(12, -32);
	glVertex2f(7, -34);
	glVertex2f(12, -35);
	glVertex2f(7, -37);
	glVertex2f(12, -38);
	glVertex2f(7, -40);
	glVertex2f(12, -41);
	//RS from the level VL
	glVertex2f(8.5, -28.5);
	glVertex2f(8.5, -31.5);
	glVertex2f(10.8, -28.5);
	glVertex2f(10.8, -31.8);
	glVertex2f(9.8, -31.5);
	glVertex2f(9.8, -34.5);
	glVertex2f(10.8, -34.5);
	glVertex2f(10.8, -37.5);
	glEnd();
	glBegin(GL_QUADS);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-10, -21);
	glVertex2f(-9, -23);
	glVertex2f(2, -23);
	glVertex2f(1, -21);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-9, -23);
	glVertex2f(-9, -25);
	glVertex2f(2, -25);
	glVertex2f(2, -23);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-9, -25);
	glVertex2f(-8, -26);
	glVertex2f(3, -26);
	glVertex2f(2, -25);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-8, -26);
	glVertex2f(-8, -28);
	glVertex2f(3, -28);
	glVertex2f(3, -26);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-12, -28);
	glVertex2f(-11, -29);
	glVertex2f(8, -29);
	glVertex2f(7, -28);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-11, -29);
	glVertex2f(-11, -31);
	glVertex2f(8, -31);
	glVertex2f(8, -29);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-11, -31);
	glVertex2f(-10, -32);
	glVertex2f(9, -32);
	glVertex2f(8, -31);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-10, -32);
	glVertex2f(-10, -34);
	glVertex2f(9, -34);
	glVertex2f(9, -32);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-10, -34);
	glVertex2f(-9, -35);
	glVertex2f(10, -35);
	glVertex2f(9, -34);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-9, -35);
	glVertex2f(-9, -37);
	glVertex2f(10, -37);
	glVertex2f(10, -35);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-9, -37);
	glVertex2f(-8, -38);
	glVertex2f(11, -38);
	glVertex2f(10, -37);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-8, -38);
	glVertex2f(-8, -40);
	glVertex2f(11, -40);
	glVertex2f(11, -38);
	//level
	glColor3f(0.94, 0.86, 0.81);
	glVertex2f(-8, -40);
	glVertex2f(-8, -41);
	glVertex2f(12, -41);
	glVertex2f(11, -40);
	//level
	glColor3f(0.660, 0.634, 0.634);
	glVertex2f(-8, -41);
	glVertex2f(-8, -44);
	glVertex2f(12, -44);
	glVertex2f(12, -41);

	//back small 1
	glColor3f(0.720, 0.684, 0.684);
	glVertex2f(-36.7, -24);
	glVertex2f(-37, -12);
	glVertex2f(-39, -12);
	glVertex2f(-39.3, -24);

	glVertex2f(-37, -12);
	glVertex2f(-37.7, -11);
	glVertex2f(-38.3, -11);
	glVertex2f(-39, -12);
	//back small 2
	glVertex2f(-21.7, -24);
	glVertex2f(-22, -9);
	glVertex2f(-24, -9);
	glVertex2f(-24.3, -24);

	glVertex2f(-22, -9);
	glVertex2f(-22.7, -8);
	glVertex2f(-23.3, -8);
	glVertex2f(-24, -9);
	//back small 3
	glVertex2f(9.7, -24);
	glVertex2f(10, -7);
	glVertex2f(12, -7);
	glVertex2f(12.3, -24);

	glVertex2f(10, -7);
	glVertex2f(10.7, -6);
	glVertex2f(11.3, -6);
	glVertex2f(12, -7);
	//back small 4
	glVertex2f(25.7, -24);
	glVertex2f(26, -11);
	glVertex2f(28, -11);
	glVertex2f(28.3, -24);

	glVertex2f(26, -11);
	glVertex2f(26.7, -10);
	glVertex2f(27.3, -10);
	glVertex2f(28, -11);
	//first
	glVertex2f(-29.7, -27.5);
	glVertex2f(-30, -4);
	glVertex2f(-33, -4);
	glVertex2f(-33.3, -27.5);

	/*glVertex2f(-30, -4);
	glVertex2f(-31, -2);
	glVertex2f(-32, -2);
	glVertex2f(-33, -4);*/
	//second
	glVertex2f(-14.5, -27.5);
	glVertex2f(-15, 0);
	glVertex2f(-18, 0);
	glVertex2f(-18.5, -27.5);

	/*glVertex2f(-15, 0);
	glVertex2f(-16, 2);
	glVertex2f(-17, 2);
	glVertex2f(-18, 0);*/

	//third bigest
	glColor3f(0.840, 0.722, 0.722);
	glVertex2f(-8, -22);
	glVertex2f(-6.5, 36);
	glVertex2f(-2.5, 36);
	glVertex2f(-1, -22);
	//fourth
	glVertex2f(15.4, -27.5);
	glVertex2f(16, 3);
	glVertex2f(19, 3);
	glVertex2f(19.6, -27.5);
	/*
	glVertex2f(10,6);
	glVertex2f(11,8);
	glVertex2f(12,8);
	glVertex2f(13,6);*/
	//fifth
	glVertex2f(32.5, -27.5);
	glVertex2f(33, -2);
	glVertex2f(36, -2);
	glVertex2f(36.5, -27.5);

	/*glVertex2f(33, -2);
	glVertex2f(34, 0);
	glVertex2f(35, 0);
	glVertex2f(36, -2);*/

	glEnd();
	glColor3f(0.850, 0.842, 0.842);
	glRectf(-40, -29, -8, -44);
	glRectf(12, -29, 40, -44);

	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3f(0.640, 0.518, 0.543);
	glVertex2f(-5.5, 36);//vertical on biggest
	glVertex2f(-5.5, -22);
	glVertex2f(-3.5, 36);
	glVertex2f(-3.5, -22);
	glVertex2f(-5.4, 36);
	glVertex2f(-5.6, -22);
	glVertex2f(-3.6, 36);
	glVertex2f(-3.4, -22);
	glVertex2f(-5.5, 36);
	glVertex2f(-5.7, -22);
	glVertex2f(-3.5, 36);
	glVertex2f(-3.3, -22);
	//
	glVertex2f(-6.7, 30);//1
	glVertex2f(-5.5, 30);
	glVertex2f(-5.5, 29.6);
	glVertex2f(-3.5, 29.6);
	glVertex2f(-3.5, 30);
	glVertex2f(-2.3, 30);
	glVertex2f(-6.7, 31.5);//
	glVertex2f(-5.5, 31.5);
	glVertex2f(-5.5, 31.1);
	glVertex2f(-3.5, 31.1);
	glVertex2f(-3.5, 31.5);
	glVertex2f(-2.3, 31.5);
	glVertex2f(-6.8, 24);//2
	glVertex2f(-5.5, 24);
	glVertex2f(-5.5, 23.6);
	glVertex2f(-3.5, 23.6);
	glVertex2f(-3.5, 24);
	glVertex2f(-2.2, 24);
	glVertex2f(-6.8, 25.5);//
	glVertex2f(-5.5, 25.5);
	glVertex2f(-5.5, 25.1);
	glVertex2f(-3.5, 25.1);
	glVertex2f(-3.5, 25.5);
	glVertex2f(-2.2, 25.5);
	glVertex2f(-7, 18);//3
	glVertex2f(-5.5, 18);
	glVertex2f(-5.5, 17.6);
	glVertex2f(-3.5, 17.6);
	glVertex2f(-3.5, 18);
	glVertex2f(-2.1, 18);
	glVertex2f(-7, 19.5);//
	glVertex2f(-5.5, 19.5);
	glVertex2f(-5.5, 19.1);
	glVertex2f(-3.5, 19.1);
	glVertex2f(-3.5, 19.5);
	glVertex2f(-2.1, 19.5);
	glVertex2f(-7.2, 12);//4
	glVertex2f(-5.5, 12);
	glVertex2f(-5.5, 11.6);
	glVertex2f(-3.5, 11.6);
	glVertex2f(-3.5, 12);
	glVertex2f(-1.9, 12);
	glVertex2f(-7.2, 13.5);//
	glVertex2f(-5.5, 13.5);
	glVertex2f(-5.5, 13.1);
	glVertex2f(-3.5, 13.1);
	glVertex2f(-3.5, 13.5);
	glVertex2f(-1.9, 13.5);
	glVertex2f(-7.3, 6);//5
	glVertex2f(-5.5, 6);
	glVertex2f(-5.5, 5.6);
	glVertex2f(-3.5, 5.6);
	glVertex2f(-3.5, 6);
	glVertex2f(-1.7, 6);
	glVertex2f(-7.3, 7.5);//
	glVertex2f(-5.5, 7.5);
	glVertex2f(-5.5, 7.1);
	glVertex2f(-3.5, 7.1);
	glVertex2f(-3.5, 7.5);
	glVertex2f(-1.7, 7.5);
	glVertex2f(-7.4, -0.5);//6
	glVertex2f(-5.5, -0.5);
	glVertex2f(-5.5, -0.9);
	glVertex2f(-3.5, -0.9);
	glVertex2f(-3.5, -0.5);
	glVertex2f(-1.55, -0.5);
	glVertex2f(-7.4, 1);//
	glVertex2f(-5.5, 1);
	glVertex2f(-5.5, 0.6);
	glVertex2f(-3.5, 0.6);
	glVertex2f(-3.5, 1);
	glVertex2f(-1.55, 1);
	glVertex2f(-7.6, -7);//7
	glVertex2f(-5.5, -7);
	glVertex2f(-3.4, -7.4);
	glVertex2f(-5.5, -7.4);
	glVertex2f(-3.4, -7);
	glVertex2f(-1.35, -7);
	glVertex2f(-7.6, -5.5);//
	glVertex2f(-5.5, -5.5);
	glVertex2f(-3.4, -5.9);
	glVertex2f(-5.5, -5.9);
	glVertex2f(-3.4, -5.5);
	glVertex2f(-1.35, -5.5);
	glVertex2f(-7.8, -14);//8
	glVertex2f(-5.5, -14);
	glVertex2f(-5.5, -14.4);
	glVertex2f(-3.5, -14.4);
	glVertex2f(-3.5, -14);
	glVertex2f(-1.2, -14);
	glVertex2f(-7.8, -12.5);//
	glVertex2f(-5.5, -12.5);
	glVertex2f(-5.5, -12.9);
	glVertex2f(-3.5, -12.9);
	glVertex2f(-3.5, -12.5);
	glVertex2f(-1.2, -12.5);

	glEnd();

	//glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(-5.2, 35.5);//hole 1
	glVertex2f(-3.8, 35.5);
	glVertex2f(-5.25, 35.1);
	glVertex2f(-4, 35.1);
	glVertex2f(-4, 35.1);
	glVertex2f(-4, 32.45);
	glVertex2f(-5.2, 35.1);
	glVertex2f(-5.2, 32.2);
	glVertex2f(-3.8, 35.5);
	glVertex2f(-3.8, 32.2);
	glVertex2f(-5.25, 32.2);
	glVertex2f(-3.8, 32.2);
	glVertex2f(-5.2, 29.2);//hole 2
	glVertex2f(-3.8, 29.2);
	glVertex2f(-5.25, 28.8);
	glVertex2f(-4, 28.8);
	glVertex2f(-4, 28.9);
	glVertex2f(-4, 26.5);
	glVertex2f(-5.2, 28.8);
	glVertex2f(-5.2, 26.3);
	glVertex2f(-3.8, 29.2);
	glVertex2f(-3.8, 26.3);
	glVertex2f(-5.25, 26.3);
	glVertex2f(-3.8, 26.3);
	glVertex2f(-5.2, 23.2);//hole 3
	glVertex2f(-3.8, 23.2);
	glVertex2f(-5.25, 22.9);
	glVertex2f(-4, 22.9);
	glVertex2f(-4, 22.9);
	glVertex2f(-4, 20.6);
	glVertex2f(-5.2, 22.9);
	glVertex2f(-5.2, 20.3);
	glVertex2f(-3.8, 23.2);
	glVertex2f(-3.8, 20.3);
	glVertex2f(-5.25, 20.4);
	glVertex2f(-3.8, 20.4);
	glVertex2f(-5.24, 17.2);//hole 3
	glVertex2f(-3.8, 17.2);
	glVertex2f(-5.3, 16.9);
	glVertex2f(-4, 16.9);
	glVertex2f(-4, 16.9);
	glVertex2f(-4, 14.6);
	glVertex2f(-5.3, 16.9);
	glVertex2f(-5.3, 14.3);
	glVertex2f(-3.8, 17.2);
	glVertex2f(-3.8, 14.3);
	glVertex2f(-5.3, 14.3);
	glVertex2f(-3.8, 14.3);
	glVertex2f(-5.24, 17.2);//hole 4
	glVertex2f(-3.8, 17.2);
	glVertex2f(-5.3, 16.9);
	glVertex2f(-4, 16.9);

	glVertex2f(-4, 16.9);
	glVertex2f(-4, 14.6);

	glVertex2f(-5.3, 16.9);
	glVertex2f(-5.3, 14.3);
	glVertex2f(-3.8, 17.2);
	glVertex2f(-3.8, 14.3);
	glVertex2f(-5.3, 14.3);
	glVertex2f(-3.8, 14.3);

	/////////////////////////////////////////////////////////////////
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(0.1, 0.1, 0.1);
	//left side H Line
	glVertex2f(-40, -29);
	glVertex2f(-8, -29);
	glVertex2f(-40, -32);
	glVertex2f(-8, -32);
	glVertex2f(-40, -35);
	glVertex2f(-8, -35);
	glVertex2f(-40, -38);
	glVertex2f(-8, -38);
	glVertex2f(-40, -41);
	glVertex2f(-8, -41);
	glVertex2f(-40, -44);
	glVertex2f(-8, -44);
	//LS vertical lines1
	glVertex2f(-8, -29);
	glVertex2f(-8, -44);
	glVertex2f(-38.5, -29);
	glVertex2f(-38.5, -32);
	glVertex2f(-35, -29);
	glVertex2f(-35, -32);
	glVertex2f(-32.5, -29);
	glVertex2f(-32.5, -32);
	glVertex2f(-29.5, -29);
	glVertex2f(-29.5, -32);
	glVertex2f(-26, -29);
	glVertex2f(-26, -32);
	glVertex2f(-23.5, -29);
	glVertex2f(-23.5, -32);
	glVertex2f(-20, -29);
	glVertex2f(-20, -32);
	glVertex2f(-17, -29);
	glVertex2f(-17, -32);
	glVertex2f(-14.5, -29);
	glVertex2f(-14.5, -32);
	glVertex2f(-11, -29);
	glVertex2f(-11, -32);
	//LS vertical lines2
	glVertex2f(-37, -32);
	glVertex2f(-37, -35);
	glVertex2f(-34.4, -32);
	glVertex2f(-34.4, -35);
	glVertex2f(-31, -32);
	glVertex2f(-31, -35);
	glVertex2f(-28.6, -32);
	glVertex2f(-28.6, -35);
	glVertex2f(-25, -32);
	glVertex2f(-25, -35);
	glVertex2f(-22, -32);
	glVertex2f(-22, -35);
	glVertex2f(-19.2, -32);
	glVertex2f(-19.2, -35);
	glVertex2f(-16, -32);
	glVertex2f(-16, -35);
	glVertex2f(-13.6, -32);
	glVertex2f(-13.6, -35);
	glVertex2f(-10, -32);
	glVertex2f(-10, -35);
	//LS vertical lines3
	glVertex2f(-38.5, -35);
	glVertex2f(-38.5, -38);
	glVertex2f(-35.5, -35);
	glVertex2f(-35.5, -38);
	glVertex2f(-32.5, -35);
	glVertex2f(-32.5, -38);
	glVertex2f(-29.5, -35);
	glVertex2f(-29.5, -38);
	glVertex2f(-26.5, -35);
	glVertex2f(-26.5, -38);
	glVertex2f(-23.5, -35);
	glVertex2f(-23.5, -38);
	glVertex2f(-20.5, -35);
	glVertex2f(-20.5, -38);
	glVertex2f(-17.5, -35);
	glVertex2f(-17.5, -38);
	glVertex2f(-14.5, -35);
	glVertex2f(-14.5, -38);
	glVertex2f(-11, -35);
	glVertex2f(-11, -38);
	//LS vertical lines4
	glVertex2f(-37, -38);
	glVertex2f(-37, -41);
	glVertex2f(-34.2, -38);
	glVertex2f(-34.2, -41);
	glVertex2f(-31, -38);
	glVertex2f(-31, -41);
	glVertex2f(-28.7, -38);
	glVertex2f(-28.7, -41);
	glVertex2f(-25, -38);
	glVertex2f(-25, -41);
	glVertex2f(-22, -38);
	glVertex2f(-22, -41);
	glVertex2f(-19.3, -38);
	glVertex2f(-19.3, -41);
	glVertex2f(-16, -38);
	glVertex2f(-16, -41);
	glVertex2f(-13.2, -38);
	glVertex2f(-13.2, -41);
	glVertex2f(-10, -38);
	glVertex2f(-10, -41);
	//LS vertical lines5
	glVertex2f(-38.5, -41);
	glVertex2f(-38.5, -44);
	glVertex2f(-35.5, -41);
	glVertex2f(-35.5, -44);
	glVertex2f(-32.5, -41);
	glVertex2f(-32.5, -44);
	glVertex2f(-29.5, -41);
	glVertex2f(-29.5, -44);
	glVertex2f(-26.5, -41);
	glVertex2f(-26.5, -44);
	glVertex2f(-23.5, -41);
	glVertex2f(-23.5, -44);
	glVertex2f(-20.5, -41);
	glVertex2f(-20.5, -44);
	glVertex2f(-17.5, -41);
	glVertex2f(-17.5, -44);
	glVertex2f(-14.5, -41);
	glVertex2f(-14.5, -44);
	glVertex2f(-11.5, -41);
	glVertex2f(-11.5, -44);
	//right side
	glVertex2f(12, -29);
	glVertex2f(40, -29);
	glVertex2f(12, -32);
	glVertex2f(40, -32);
	glVertex2f(40, -35);
	glVertex2f(12, -35);
	glVertex2f(40, -38);
	glVertex2f(12, -38);
	glVertex2f(40, -41);
	glVertex2f(12, -41);
	glVertex2f(40, -44);
	glVertex2f(12, -44);
	//RS vertical lines1
	glVertex2f(12, -29);
	glVertex2f(12, -44);
	glVertex2f(15, -29);
	glVertex2f(15, -32);
	glVertex2f(18, -29);
	glVertex2f(18, -32);
	glVertex2f(21, -29);
	glVertex2f(21, -32);
	glVertex2f(24, -29);
	glVertex2f(24, -32);
	glVertex2f(27.5, -29);
	glVertex2f(27.5, -32);
	glVertex2f(30, -29);
	glVertex2f(30, -32);
	glVertex2f(33, -29);
	glVertex2f(33, -32);
	glVertex2f(35.5, -29);
	glVertex2f(35.5, -32);
	glVertex2f(38, -29);
	glVertex2f(38, -32);
	//RS vertical lines2
	glVertex2f(14, -32);
	glVertex2f(14, -35);
	glVertex2f(17, -32);
	glVertex2f(17, -35);
	glVertex2f(20, -32);
	glVertex2f(20, -35);
	glVertex2f(23, -32);
	glVertex2f(23, -35);
	glVertex2f(26, -32);
	glVertex2f(26, -35);
	glVertex2f(29, -32);
	glVertex2f(29, -35);
	glVertex2f(31.2, -32);
	glVertex2f(31.2, -35);
	glVertex2f(34, -32);
	glVertex2f(34, -35);
	glVertex2f(37.5, -32);
	glVertex2f(37.5, -35);
	glVertex2f(39.5, -32);
	glVertex2f(39.5, -35);
	//RS vertical lines3
	glVertex2f(15, -35);
	glVertex2f(15, -38);
	glVertex2f(18.5, -35);
	glVertex2f(18.5, -38);
	glVertex2f(21.5, -35);
	glVertex2f(21.5, -38);
	glVertex2f(24.5, -35);
	glVertex2f(24.5, -38);
	glVertex2f(27.5, -35);
	glVertex2f(27.5, -38);
	glVertex2f(30.5, -35);
	glVertex2f(30.5, -38);
	glVertex2f(33, -35);
	glVertex2f(33, -38);
	glVertex2f(35.7, -35);
	glVertex2f(35.7, -38);
	glVertex2f(38.5, -35);
	glVertex2f(38.5, -38);
	//RS vertical lines4
	glVertex2f(14, -38);
	glVertex2f(14, -41);
	glVertex2f(17, -38);
	glVertex2f(17, -41);
	glVertex2f(20.5, -38);
	glVertex2f(20.5, -41);
	glVertex2f(23.3, -38);
	glVertex2f(23.3, -41);
	glVertex2f(25.5, -38);
	glVertex2f(25.5, -41);
	glVertex2f(28, -38);
	glVertex2f(28, -41);
	glVertex2f(31.3, -38);
	glVertex2f(31.3, -41);
	glVertex2f(34.7, -38);
	glVertex2f(34.7, -41);
	glVertex2f(37.7, -38);
	glVertex2f(37.7, -41);
	//LS vertical lines5
	glVertex2f(15, -41);
	glVertex2f(15, -44);
	glVertex2f(18, -41);
	glVertex2f(18, -44);
	glVertex2f(21.5, -41);
	glVertex2f(21.5, -44);
	glVertex2f(24.5, -41);
	glVertex2f(24.5, -44);
	glVertex2f(27, -41);
	glVertex2f(27, -44);
	glVertex2f(30, -41);
	glVertex2f(30, -44);
	glVertex2f(33.5, -41);
	glVertex2f(33.5, -44);
	glVertex2f(36, -41);
	glVertex2f(36, -44);
	glVertex2f(39.3, -41);
	glVertex2f(39.3, -44);

	glEnd();
	glPushMatrix();
	glColor3f(0.840, 0.722, 0.722);
	glTranslatef(17.5, 3.5, 0);
	glutSolidCone(1.5, 2, 20, 20);

	glColor3f(0.840, 0.722, 0.722);
	glTranslatef(17, -5.2, 0);
	glutSolidCone(1.5, 2, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.4, 0.8, 0.9);
	glTranslatef(11.5, 3.5, 0);
	glutSolidCone(1.5, 2, 20, 20);
	glColor3f(0.640, 0.518, 0.543);
	glTranslatef(-17.83, 28.4, 0);//1
	glutSolidCone(0.22, 2, 20, 20);
	glTranslatef(0.5, 0, 0);
	glutSolidCone(0.22, 2, 20, 20);
	glTranslatef(2.68, 0, 0);
	glutSolidCone(0.22, 2, 20, 20);
	glTranslatef(0.5, 0, 0);
	glutSolidCone(0.22, 2, 20, 20);
	glTranslatef(-2.3, -0.3, 0);
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(-2.3, -5.6, 0);//2
	glutSolidCone(0.24, 2, 20, 20);
	glTranslatef(0.5, 0, 0);
	glutSolidCone(0.24, 2, 20, 20);
	glTranslatef(2.9, 0, 0);
	glutSolidCone(0.24, 2, 20, 20);
	glTranslatef(0.5, 0, 0);
	glutSolidCone(0.24, 2, 20, 20);
	glTranslatef(-2.3, -0.3, 0);
	glutSolidCone(0.37, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.37, 2, 20, 20);
	glTranslatef(-2.4, -5.7, 0);//3
	glutSolidCone(0.25, 2, 20, 20);
	glTranslatef(0.6, 0, 0);
	glutSolidCone(0.25, 2, 20, 20);
	glTranslatef(2.7, 0, 0);
	glutSolidCone(0.25, 2, 20, 20);
	glTranslatef(0.6, 0, 0);
	glutSolidCone(0.25, 2, 20, 20);
	glTranslatef(-2.3, -0.3, 0);
	glutSolidCone(0.38, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.38, 2, 20, 20);
	glTranslatef(-2.7, -5.7, 0);//4
	glutSolidCone(0.26, 2, 20, 20);
	glTranslatef(0.7, 0, 0);
	glutSolidCone(0.26, 2, 20, 20);
	glTranslatef(3, 0, 0);
	glutSolidCone(0.26, 2, 20, 20);
	glTranslatef(0.6, 0, 0);
	glutSolidCone(0.26, 2, 20, 20);
	glTranslatef(-2.5, -0.3, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(0.9, 0, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(-2.7, -5.7, 0);//5
	glutSolidCone(0.3, 2, 20, 20);
	glTranslatef(0.7, 0, 0);
	glutSolidCone(0.3, 2, 20, 20);
	glTranslatef(3.15, 0, 0);
	glutSolidCone(0.3, 2, 20, 20);
	glTranslatef(0.7, 0, 0);
	glutSolidCone(0.3, 2, 20, 20);
	glTranslatef(-2.7, -0.3, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(0.9, 0, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(-2.9, -6.1, 0);//6
	glutSolidCone(0.32, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.32, 2, 20, 20);
	glTranslatef(3.2, 0, 0);
	glutSolidCone(0.32, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.32, 2, 20, 20);
	glTranslatef(-2.9, -0.3, 0);
	glutSolidCone(0.41, 2, 20, 20);
	glTranslatef(0.9, 0, 0);
	glutSolidCone(0.41, 2, 20, 20);
	glTranslatef(-2.9, -6.2, 0);//7
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(3.35, 0, 0);
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(0.8, 0, 0);
	glutSolidCone(0.35, 2, 20, 20);
	glTranslatef(-2.9, -0.3, 0);
	glutSolidCone(0.42, 2, 20, 20);
	glTranslatef(0.9, 0, 0);
	glutSolidCone(0.42, 2, 20, 20);
	glTranslatef(-3.2, -6.5, 0);//8
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(1, 0, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(3.35, 0, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(1, 0, 0);
	glutSolidCone(0.4, 2, 20, 20);
	glTranslatef(-3, -0.3, 0);
	glutSolidCone(0.42, 2, 20, 20);
	glTranslatef(0.9, 0, 0);
	glutSolidCone(0.42, 2, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.840, 0.722, 0.722);
	glTranslatef(-16.5, 0, 0);
	GLUquadricObj* objj = gluNewQuadric();
	gluPartialDisk(objj, 0, 1.5, 50, 90, 90, -180);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.840, 0.722, 0.722);
	glTranslatef(-31.5, -4, 0);
	GLUquadricObj* objj1 = gluNewQuadric();
	gluPartialDisk(objj1, 0, 1.55, 50, 90, 90, -180);
	glPopMatrix();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(1365, 700);
	glutCreateWindow("Axum Oblisk");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
