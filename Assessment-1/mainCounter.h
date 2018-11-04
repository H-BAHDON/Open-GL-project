

void animate() {
	if (S_counter == 1)
		intro();
	if (S_counter == 2)
		scene1();
	if (S_counter == 3)
		scene2();
	if (S_counter == 4)
		scene3();
	if (S_counter == 5)
		scene4();
	if (S_counter == 6)
		ending();	
}

void scene_id() {
	S_counter == 1;
	intro_animation();
	S_counter == 2;
	scene1_animation();
	S_counter == 3;
	scene2_animation();
	S_counter == 4;
	scene3_animation();
	S_counter == 5;
	scene4_animation();
	S_counter == 6;
	ending_aniamtion();

}

void maincount() {
		frame++;	
		if (runanimation) {
			scene_id;
		}
		//i can call out my frames and link it to a scene i want


	// this runs my scenes from frame to frame
		printf("%d\n", frame);
		if (frame >= 0 && frame < 2000){
			S_counter = 1;
		}
		else if (frame >= 2000 && frame < 4000){
			S_counter = 2;
		}
		else if (frame >= 4000 && 6000){
			S_counter = 3;
		}
		else if (frame >= 6000 && 8000){
			S_counter = 4;
		}
		else if (frame >= 8000 && 10000) {
			S_counter = 5;
		}
		else if (frame >= 12000 && 14000) {
			S_counter = 6;
		}


		//this ends my animation
		animate();
		if (frame > 14000) {
			frame = 0;
			runanimation = false;
		}
		
}
