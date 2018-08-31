#ifndef ALLPICTURESLOAD_H_INCLUDED
#define ALLPICTURESLOAD_H_INCLUDED




int background[500];
int rocket[5];
int alien[10];
int bullet[100];
int ind;


















// loading images.
	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/

void ImageLoader()
{
	//video play
	background[1] = iLoadImage("image\\v1.png");
	background[2] = iLoadImage("image\\v2.png");
	background[3] = iLoadImage("image\\v3.png");
	background[4] = iLoadImage("image\\v4.png");
	background[5] = iLoadImage("image\\v5.png");
	background[6] = iLoadImage("image\\v6.png");
	background[7] = iLoadImage("image\\v7.png");
	background[8] = iLoadImage("image\\v8.png");
	background[9] = iLoadImage("image\\v9.png");
	background[10] = iLoadImage("image\\v10.png");
	background[11] = iLoadImage("image\\v11.png");
	background[12] = iLoadImage("image\\v12.png");
	background[13] = iLoadImage("image\\v13.png");
	background[14] = iLoadImage("image\\v14.png");
	background[15] = iLoadImage("image\\v15.png");
	background[16] = iLoadImage("image\\v16.png");
	background[17] = iLoadImage("image\\v17.png");
	background[18] = iLoadImage("image\\v18.png");
	background[19] = iLoadImage("image\\v19.png");
	background[20] = iLoadImage("image\\v20.png");

	background[21] = iLoadImage("image\\menu.png");

	ind = iLoadImage("image//indicator.png");

	background[22] = iLoadImage("image\\instructions.jpg");
	background[23] = iLoadImage("image\\levels.jpg");
	background[24] = iLoadImage("image\\controls.jpg");
	background[25] = iLoadImage("image\\leaderboard.jpg");
	background[26] = iLoadImage("image\\credits.jpg");

	background[27] = iLoadImage("image\\SaveName.jpg");

	background[28] = iLoadImage("image\\ScoreWindow.jpg");

	background[30] = iLoadImage("image\\stage0.jpg");

	rocket[1] = iLoadImage("image\\rocket1.png");


	alien[1] = iLoadImage("image\\alien1.png");


	bullet[1] = iLoadImage("image//bullet1.png");
	bullet[2] = iLoadImage("image//bullet2.png");
	bullet[3] = iLoadImage("image//bullet3.png");


	bullet[4] = iLoadImage("image//bulletA1.png");
	bullet[5] = iLoadImage("image//bulletA2.png");


}

#endif // !ALLPICTURESLOAD_H_INCLUDED