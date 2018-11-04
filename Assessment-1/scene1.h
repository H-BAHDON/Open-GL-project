void background() {
	//sky
	glColor3f(0.529, 0.808, 0.922);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 1000);
	glVertex2i(1000, 1000);
	glVertex2i(1000, 0);
	glEnd();
}

void grass() {
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 400);
	glVertex2i(450, 400);
	glVertex2i(450, 0);
	 

	glVertex2i(570, 0);
	glVertex2i(570, 400);
	glVertex2i(1000, 400);
	glVertex2i(1000, 0);
	glEnd();
}
void cloud() {
	//cloud left
	glColor3f(1.000, 1.000, 1.000);
	drawCircle(30, 100, 800);
	drawCircle(30, 130, 830);
	drawCircle(30, 120, 800);


	drawCircle(30, 160, 730);
	drawCircle(30, 190, 700);
	drawCircle(30, 150, 700);

	glColor3f(1.000, 1.000, 1.000);
	drawCircle(30, 700, 800);
	drawCircle(30, 730, 830);
	drawCircle(30, 720, 800);


	drawCircle(30, 760, 730);
	drawCircle(30, 790, 700);
	drawCircle(30, 750, 700);
}


void sun() {
	//sun
	glColor3f(1.000, 1.000, 0.000);
	drawEllipse(40, 50, 20, 970);
}

void house() {
	glColor3f(5.0, 8.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(250, 400);
	glVertex2i(250, 650);

	glVertex2i(750, 650);
	glVertex2i(750, 400);

	glColor3f(2.0, 5.0, 4.0);
	//roof
	glVertex2i(250, 650);
	glVertex2i(500, 800);
	glVertex2i(750, 650);
	glVertex2i(250, 650);
	glVertex2i(750, 650);
	glEnd();
}

void scene1() {
	background();
	grass();
	house();
	cloud();
	sun();
}