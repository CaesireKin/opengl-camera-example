#include "assist.h"

void Render(void)
{

}

void Resize(int width,int height)
{
	GLfloat aspectRatio = (GLfloat)16 / (GLfloat)9;

	height = (GLfloat)width / aspectRatio;

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glFrustum(0.0,100.0,0.0,100.0,10.0,200.0);
}

void Configure(void)
{

}
void ProcessingKeyEvent(int key,int x,int y)
{

}