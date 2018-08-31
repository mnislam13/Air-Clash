#ifndef MENUPAGE_H_INCLUDED
#define MENUPAGE_H_INCLUDED

#include <math.h>
#include <cstdlib>
#include <ctime>
#include "AllPicturesLoad.h"
#include "NewGame.h"
#include "Leaderboard.h"
#include "Levels.h"

int i=1;
int v=1, a= 368;
int f=0;
int MP=0; //Menu Page flag
int APT;


void changeV()
{
		i= i+1;
}

void menu()
{

	/* iShowImage():
	Here, first 2 parameters are the lower left
	corner position of image you want to put.
	3rd and 4th parameters are the widht and the height
	of the image.
	Last parameter is the id of the image you want to put.
	*/

	if(i<=20)
	{
		iShowImage(0, 0, 1280, 756, background[i]);
	}
	else if(i > 21 && MP == 0)
		{
			if(SW == 0)
				savingName();
			else
				scoreWindow();
		}

	else if(MP == 1)
	{

		if(f == 0)
		{
		iShowImage(0, 0, 1280, 756, background[21]);
		iShowImage(901, a, 50, 30, ind);
		}
		if (f == 2)
		{
			iShowImage(0, 0, 1280, 756, background[22]);
			iSetColor(255, 255, 255);
			iText(900, 70, "Press Backspace to go to the main menu");
		}
		if (f == 3)
		{
			levels();
		}
		if (f == 4)
		{
			iShowImage(0, 0, 1280, 756, background[24]);
			iSetColor(255, 255, 255);
			iText(900, 70, "Press Backspace to go to the main menu");
		}
		if (f == 5)
		{
			leaderboard();
		}
		if (f == 6)
		{
			iShowImage(0, 0, 1280, 756, background[26]);
			iSetColor(255, 255, 255);
			iText(900, 70, "Press Backspace to go to the main menu");
		}
		if(f == 7)
		{
			exit(0);
		}
	}

	if (GM==1)
		{
			gamePlay();
			alienPlay();
			//iResumeTimer(APT);
		}

}

#endif // !MENUPAGE_H_INCLUDED