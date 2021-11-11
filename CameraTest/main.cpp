#include "assist.h"

int main(int argc,char* argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("CameraTest");
	glutInitWindowSize(800,600);

	glutReshapeFunc(Resize);
	glutDisplayFunc(Render);
	glutSpecialFunc(ProcessingKeyEvent);
	Confgure();

	glutMainLoop();

	return 0;
}