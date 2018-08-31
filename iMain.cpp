#include "iGraphics.h"
#include "MenuPage.h"


#define sHeight 705
#define sWidth 500


/*
function iDraw() is called again and again by the system.
*/
/*
void changeV()
{
		i= i+1;
}
*/
void iDraw()
{
	//place your drawing codes here

	iClear();

	//if(GM==0 && f==0)menu();
	//if(GM==1)gamePlay();
	menu();



}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}
/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
}


/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		 
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
		//do something with 'q'
		
	}
	if (key == 'r')
	{

	}
	if (key == '\b')
		{
			f = 0;
			MP = 1;
		}

	if (key == '\r')
		{

			if (MP == 0)
			{
				MP = 1;
			}

			else if( MP == 1 && GM == 0)
			{
				//to enter new game
				if (a==368)
				{
					GM=1;
				}


				//to enter instructions
				if (a==321)
					f = 2;


				//to enter levels
				if (a==274)
					f = 3;

				//to enter controls
				if (a==227)
					f = 4;

				//to enter leaderboard
				if (a==180)
					f = 5;

				//to enter credits
				if (a==133)
					f = 6;

				//to exit
				if (a==86)
					f = 7;
			}
		}

	if (key == 'x')
	{
		Rbs=1;
	}

	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	if(GM == 1)
	{
		if(key == GLUT_KEY_RIGHT)
		{
			rocket_x += 10;
		}
		else if(key == GLUT_KEY_LEFT)
		{
			rocket_x -= 10;
		}
		else if(key == GLUT_KEY_UP)
		{
			rocket_y += 10;
		}
		else if(key == GLUT_KEY_DOWN)
		{
			rocket_y -= 10;
		}
	}

	if(GM == 0)
	{
		if(key == GLUT_KEY_UP)
		{
			if(a<=321)
			a += 47;
		}
		else if(key == GLUT_KEY_DOWN)
		{
			if(a>=133)
			a -= 47;
		}
	}
/*
	if(GM == 1 && key == GLUT_KEY_27)
	{
		GM = 0;
		MP = 0;
		SW = 1;
	}
*/
	if((GM == 1 && key == GLUT_KEY_HOME)||(GO == 1))
	{
		GM = 0;
		MP = 0;
		SW = 1;
	}
	else if(SW == 1 && key == GLUT_KEY_HOME)
	{
		MP = 1;
	}



	//place your codes for other keys here
}



int main()
{
	//place your own initialization codes here.
	iSetTimer(30, changeV);
	//APT=iSetTimer(30, alienPlay);
	//iPauseTimer(APT);
	//iSetTimer(30, bulletShoot);
	//iSetTimer(1, menu);
	//iPauseTimer(a);

	iInitialize(1280, 756, "Air Clash");

	ImageLoader();	


	iStart(); // it will start drawing

	return 0;
}
