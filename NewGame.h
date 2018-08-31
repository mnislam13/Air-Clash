#ifndef NEWGAME_H_INCLUDED
#define NEWGAME_H_INCLUDED

/*
#include <math.h>
#include <cstdlib>
#include <ctime>
*/


int rocket_x = 600;
int rocket_y = 0;

int alien_x = 600;
int alien_y = 650;

int GM=0; //Game Mode flag
float bg_y=0.00;
int Rbs=0; //Rocket's Bullet Shooting flag
int Abs=0; //Alien's's Bullet Shooting flag

int bullet1_y=rocket_y+120, bullet2_y=rocket_y+120, bullet3_y=rocket_y+120;
int bullet4_y=alien_y;

int GO=0; //Game Over flag


int sb = 0; //Special Bullet flag
int sbc = 0; //Special Bullet count 

int eh = 0; //Extra Health flag
int ehc = 0; //Extra Health count 

int bulletcount=0;



/*
void movingBackground()
{
	//moving background
	if(GM==1)
		{
			if(bg_y>-3080)
				bg_y -= 0.8;
			else
				bg_y=-3080;
		}
}
*/

void bulletShoot()
{

	if(bulletcount==1 && bullet1_y>760)
		Rbs=0;


	//shooting bullet continuously
	if(GM==1)
	{
		if(Rbs==0 || bullet1_y>760)
		{
			if(sb == 1)
			sbc = sbc+1;
			bullet1_y=rocket_y+120;

			bullet2_y=rocket_y+120;
			bullet3_y=rocket_y+120;
		}
		else if(Rbs==1)
			{
				bulletcount=1;
				bullet1_y=bullet1_y+30;


				iShowImage(rocket_x+40, bullet1_y, 30, 60, bullet[1]);

				if(sbc!=0 && sbc < 40)
				{
					bullet2_y=bullet2_y+30;
					bullet3_y=bullet3_y+30;
					iShowImage(rocket_x, bullet2_y, 20, 40, bullet[2]);
					iShowImage(rocket_x+90, bullet3_y, 20, 40, bullet[3]);
				}
			}
	}

}


void alienPlay()
{
	iShowImage(alien_x ,alien_y ,120 ,100, alien[1]);

		if(bullet4_y<10)
		{
			bullet4_y=alien_y;
		}
		else
			{
				bullet4_y=bullet4_y-20;
				iShowImage(alien_x+40, bullet4_y, 40, 40, bullet[4]);

			}
}








void gamePlay()
{
		iShowImage(0, bg_y, 1280, 3840, background[30]);
		iShowImage(rocket_x, rocket_y, 110, 140, rocket[1]);
		//iShowImage(alien_x ,alien_y ,120 ,80, alien[1]);
		bulletShoot();
		//movingBackground();
		//alienPlay();
		
}



#endif // !NEWGAME_H_INCLUDED