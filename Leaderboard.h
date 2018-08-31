#ifndef LEADERBOARD_H_INCLUDED
#define LEADERBOARD_H_INCLUDED


int SW = 0; //Score Window flag


void scoreWindow()
{
	iShowImage(0, 0, 1280, 756, background[28]);
}










void savingName()
{
	iShowImage(0, 0, 1280, 756, background[27]);
	//iSetColor(0, 0, 0);
	//iFilledRectangle(0, 0, 1280, 756);

	iSetColor(0, 0, 0);
	iFilledRectangle(245, 155, 500, 100);
	iSetColor(255, 0, 0);
	iText(300, 195, "Enter Your Name:");
}



void leaderboard()
{
		iShowImage(0, 0, 1280, 756, background[25]);
		iSetColor(255, 255, 255);
		iText(900, 70, "Press Backspace to go to the main menu");
}


#endif // !LEADERBOARD_H_INCLUDED