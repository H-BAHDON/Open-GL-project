#include <stdio.h>  
#include "glut.h"

#include "keyInput.h" //these are all my keybroad inputs

#include "circle.h"//this is my circle, allow me to call out the circle if i want to draw it
#include "ellipse.h"//this is my ellipse, allow me to call out the ellipse if i want to draw it

#include "student.h"//my student character 
#include "teacher.h"// this is my teacher character
#include "mainDeclare.h" //this is my main declare
//this is my intro
#include "A_intro.h"
#include "A_intro_animation.h"
//this is my first scene
#include "scene1.h"
#include "scene1_animation.h"
//this is my second scene
#include "scene2.h"
#include "scene2_animation.h"
//this is my third scene
#include "scene3.h"
#include "scene3_animation.h"
//this is my fourth scene
#include "scene4.h"
#include "scene4_animation.h"
//this is my ending scene
#include "Z_ending.h"
#include "Z_ending_animation.h"
//this is my main counter
#include "mainCounter.h"
#include "color_Declare.h"




void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0); 
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(0.0, 1000, 0.0, 1000);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	
	maincount();
 
	glFlush();
}

void idle() {
	display();
	
}



int main(int argc, char** argv) {


	glutInit(&argc, argv);  

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	
	glutInitWindowSize(windowWidth, windowHeight); 
	glutInitWindowPosition(windowPosX, windowPosY);
	glutCreateWindow("Hello");
	glutDisplayFunc(display);
	
	
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(keyboard);

	glutFullScreen();
	
	
	init();
	glutIdleFunc(idle); 
	glutMainLoop();

	
	return 0;
}

