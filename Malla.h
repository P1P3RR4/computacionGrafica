#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"


class Malla
{
public:
	Malla() {};
	/*void DibujarMalla(float x, float y, float z);*/
	void DibujarVsTriangulo(float x, float y, float z);
	void DibujarVsTetera(float x, float y, float z);
	void DibujarVsCubo1(float x, float y, float z);
	void DibujarVsCubo2(float x, float y, float z);
	~Malla() {};
};

