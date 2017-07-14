#include "stdafx.h"
#include"graphics.h"
#include <stdio.h>
#include <tchar.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

extern int a[4][4];
extern int b[16][2];
extern int x; 
extern int y;

void printPic(){
	BeginBatchDraw();
	setrop2(R2_XORPEN);

	IMAGE Back;
	loadimage(&Back, "back.jpg");
	putimage(0, 0, &Back); 
	IMAGE pic2,pic4,pic8,pic16,pic32,pic64,pic128,pic256,pic512,pic1024,pic2048;
	loadimage(&pic2, "2.jpg");
	loadimage(&pic4, "4.jpg");
	loadimage(&pic8, "8.jpg");
	loadimage(&pic16, "16.jpg");
	loadimage(&pic32, "32.jpg");
	loadimage(&pic64, "64.jpg");
	loadimage(&pic128, "128.jpg");
	loadimage(&pic256, "256.jpg");
	loadimage(&pic512, "512.jpg");
	loadimage(&pic1024, "1024.jpg");
	loadimage(&pic2048, "2048.jpg");

	int index = 1;

	
		
	for(int i = 0;i<4;i++){
		for(int j = 0;j<4;j++){
			switch(index){

				case 1:
					if(a[i][j] == 2){
						putimage(9,8, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9,8, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9,8, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9,8, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9,8, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9,8, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9,8, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9,8, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9,8, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9,8, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9,8, &pic2048); 
					}
					break;

				case 2:
					if(a[i][j] == 2){
						putimage(109, 8, &pic2);
					}
					if(a[i][j] == 4){
						putimage(109, 8, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(109, 8, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(109, 8, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(109, 8, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(109, 8, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(109, 8, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(109, 8, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(109, 8, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(109, 8, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(109, 8, &pic2048); 
					}
					break;

				case 3:
					if(a[i][j] == 2){
						putimage(207, 8, &pic2);
					}
					if(a[i][j] == 4){
						putimage(207, 8, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(207, 8, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(207, 8, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(207, 8, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(207, 8, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(207, 8, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(207, 8, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(207, 8, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(207, 8, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(207, 8, &pic2048); 
					}
					break;

				case 4:
					if(a[i][j] == 2){
						putimage(304, 8, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 8, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 8, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 8, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 8, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 8, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 8, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 8, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 8, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 8, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 8, &pic2048); 
					}
					break;

				case 5:
					if(a[i][j] == 2){
						putimage(9, 104, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9, 104, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9, 104, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9, 104, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9, 104, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9, 104, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9, 104, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9, 104, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9, 104, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9, 104, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9, 104, &pic2048); 
					}
					break;

				case 6:
					if(a[i][j] == 2){
						putimage(108, 104, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 104, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 104, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 104, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 104, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 104, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 104, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 104, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 104, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 104, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 104, &pic2048); 
					}
					break;

				case 7:
					if(a[i][j] == 2){
						putimage(207, 104, &pic2);
					}
					if(a[i][j] == 4){
						putimage(207, 104, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(207, 104, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(207, 104, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(207, 104, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(207, 104, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(207, 104, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(207, 104, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(207, 104, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(207, 104, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(207, 104, &pic2048); 
					}
					break;

				case 8:
					if(a[i][j] == 2){
						putimage(304, 104, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 104, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 104, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 104, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 104, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 104, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 104, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 104, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 104, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 104, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 104, &pic2048); 
					}
					break;

				case 9:
					if(a[i][j] == 2){
						putimage(9, 201, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9, 201, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9, 201, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9, 201, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9, 201, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9, 201, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9, 201, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9, 201, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9, 201, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9, 201, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9, 201, &pic2048); 
					}
					break;

				case 10:
					if(a[i][j] == 2){
						putimage(108, 201, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 201, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 201, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 201, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 201, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 201, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 201, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 201, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 201, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 201, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 201, &pic2048); 
					}
					break;

				case 11:
					if(a[i][j] == 2){
						putimage(206, 201, &pic2);
					}
					if(a[i][j] == 4){
						putimage(206, 201, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(206, 201, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(206, 201, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(206, 201, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(206, 201, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(206, 201, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(206, 201, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(206, 201, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(206, 201, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(206, 201, &pic2048); 
					}
					break;

				case 12:
					if(a[i][j] == 2){
						putimage(304, 201, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 201, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 201, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 201, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 201, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 201, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 201, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 201, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 201, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 201, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 201, &pic2048); 
					}
					break;

				case 13:
					if(a[i][j] == 2){
						putimage(10, 298, &pic2);
					}
					if(a[i][j] == 4){
						putimage(10, 298, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(10, 298, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(10, 298, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(10, 298, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(10, 298, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(10, 298, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(10, 298, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(10, 298, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(10, 298, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(10, 298, &pic2048); 
					}
					break;

				case 14:
					if(a[i][j] == 2){
						putimage(108, 297, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 297, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 297, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 297, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 297, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 297, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 297, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 297, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 297, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 297, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 297, &pic2048); 
					}
					break;

				case 15:
					if(a[i][j] == 2){
						putimage(206, 298, &pic2);
					}
					if(a[i][j] == 4){
						putimage(206, 298, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(206, 298, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(206, 298, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(206, 298, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(206, 298, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(206, 298, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(206, 298, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(206, 298, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(206, 298, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(206, 298, &pic2048); 
					}
					break;

				case 16:
					if(a[i][j] == 2){
						putimage(303, 298, &pic2);
					}
					if(a[i][j] == 4){
						putimage(303, 298, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(303, 298, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(303, 298, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(303, 298, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(303, 298, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(303, 298, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(303, 298, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(303, 298, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(303, 298, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(303, 298, &pic2048); 
					}
					break;
			}

			index++;
		}
		
	}
	index = 1;
	FlushBatchDraw();
	EndBatchDraw();
	return ;
}
