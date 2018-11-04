void background1(){
	//sky
	glColor3f(0.529, 0.808, 0.922);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 1000);
	glVertex2i(1000, 1000);
	glVertex2i(1000, 0);
	glEnd();
}



void intro() {
	background1();
	
}