#include "Malla.h"


void Malla::DibujarVsTriangulo(float x, float y, float z){

	glPushMatrix();
	glTranslatef(x, y, z);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.7, 0, 0);
	glVertex3f(0, 0.7, 0);
	glVertex3f(-0.7, 0, 0);
	glEnd();
	glPopMatrix();
}


void Malla::DibujarVsTetera(float x, float y, float z){
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidTeapot(1);
	glPopMatrix();
}


void Malla::DibujarVsCubo1(float x, float y, float z){
	glPushMatrix();
	glTranslatef(x, y, z);
	glRotated(45, 0, 0, 0);
	glutSolidCube(1);
	glPopMatrix();
}


void Malla::DibujarCubo2(float x, float y, float z){
	glPushMatrix();
	glTranslatef(x, y, z);
	glRotated(45, 0, 0, 0);
	glutSolidCube(1);
	glPopMatrix();
}