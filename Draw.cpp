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

	IMAGE Back,TOP;
	loadimage(&Back, "back.jpg");
	putimage(0, 70, &Back); 


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
						putimage(9,78, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9,78, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9,78, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9,78, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9,78, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9,78, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9,78, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9,78, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9,78, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9,78, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9,78, &pic2048); 
					}
					break;

				case 2:
					if(a[i][j] == 2){
						putimage(109, 78, &pic2);
					}
					if(a[i][j] == 4){
						putimage(109, 78, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(109, 78, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(109, 78, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(109, 78, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(109, 78, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(109, 78, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(109, 78, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(109, 78, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(109, 78, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(109, 78, &pic2048); 
					}
					break;

				case 3:
					if(a[i][j] == 2){
						putimage(207, 78, &pic2);
					}
					if(a[i][j] == 4){
						putimage(207, 78, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(207, 78, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(207, 78, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(207, 78, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(207, 78, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(207, 78, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(207, 78, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(207, 78, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(207, 78, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(207, 78, &pic2048); 
					}
					break;

				case 4:
					if(a[i][j] == 2){
						putimage(304, 78, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 78, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 78, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 78, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 78, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 78, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 78, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 78, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 78, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 78, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 78, &pic2048); 
					}
					break;

				case 5:
					if(a[i][j] == 2){
						putimage(9, 174, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9, 174, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9, 174, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9, 174, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9, 174, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9, 174, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9, 174, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9, 174, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9, 174, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9, 174, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9, 174, &pic2048); 
					}
					break;

				case 6:
					if(a[i][j] == 2){
						putimage(108, 174, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 174, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 174, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 174, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 174, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 174, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 174, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 174, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 174, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 174, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 174, &pic2048); 
					}
					break;

				case 7:
					if(a[i][j] == 2){
						putimage(207, 174, &pic2);
					}
					if(a[i][j] == 4){
						putimage(207, 174, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(207, 174, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(207, 174, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(207, 174, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(207, 174, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(207, 174, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(207, 174, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(207, 174, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(207, 174, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(207, 174, &pic2048); 
					}
					break;

				case 8:
					if(a[i][j] == 2){
						putimage(304, 174, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 174, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 174, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 174, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 174, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 174, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 174, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 174, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 174, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 174, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 174, &pic2048); 
					}
					break;

				case 9:
					if(a[i][j] == 2){
						putimage(9, 271, &pic2);
					}
					if(a[i][j] == 4){
						putimage(9, 271, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(9, 271, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(9, 271, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(9, 271, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(9, 271, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(9, 271, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(9, 271, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(9, 271, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(9, 271, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(9, 271, &pic2048); 
					}
					break;

				case 10:
					if(a[i][j] == 2){
						putimage(108, 271, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 271, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 271, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 271, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 271, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 271, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 271, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 271, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 271, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 271, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 271, &pic2048); 
					}
					break;

				case 11:
					if(a[i][j] == 2){
						putimage(206, 271, &pic2);
					}
					if(a[i][j] == 4){
						putimage(206, 271, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(206, 271, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(206, 271, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(206, 271, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(206, 271, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(206, 271, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(206, 271, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(206, 271, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(206, 271, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(206, 271, &pic2048); 
					}
					break;

				case 12:
					if(a[i][j] == 2){
						putimage(304, 271, &pic2);
					}
					if(a[i][j] == 4){
						putimage(304, 271, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(304, 271, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(304, 271, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(304, 271, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(304, 271, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(304, 271, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(304, 271, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(304, 271, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(304, 271, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(304, 271, &pic2048); 
					}
					break;

				case 13:
					if(a[i][j] == 2){
						putimage(10, 368, &pic2);
					}
					if(a[i][j] == 4){
						putimage(10, 368, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(10, 368, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(10, 368, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(10, 368, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(10, 368, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(10, 368, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(10, 368, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(10, 368, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(10, 368, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(10, 368, &pic2048); 
					}
					break;

				case 14:
					if(a[i][j] == 2){
						putimage(108, 367, &pic2);
					}
					if(a[i][j] == 4){
						putimage(108, 367, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(108, 367, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(108, 367, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(108, 367, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(108, 367, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(108, 367, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(108, 367, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(108, 367, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(108, 367, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(108, 367, &pic2048); 
					}
					break;

				case 15:
					if(a[i][j] == 2){
						putimage(206, 368, &pic2);
					}
					if(a[i][j] == 4){
						putimage(206, 368, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(206, 368, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(206, 368, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(206, 368, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(206, 368, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(206, 368, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(206, 368, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(206, 368, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(206, 368, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(206, 368, &pic2048); 
					}
					break;

				case 16:
					if(a[i][j] == 2){
						putimage(303, 368, &pic2);
					}
					if(a[i][j] == 4){
						putimage(303, 368, &pic4); 
					}
					if(a[i][j] == 8){
						putimage(303, 368, &pic8); 
					}
					if(a[i][j] == 16){
						putimage(303, 368, &pic16); 
					}
					if(a[i][j] == 32){
						putimage(303, 368, &pic32); 
					}
					if(a[i][j] == 64){
						putimage(303, 368, &pic64); 
					}
					if(a[i][j] == 128){
						putimage(303, 368, &pic128); 
					}
					if(a[i][j] == 256){
						putimage(303, 368, &pic256); 
					}
					if(a[i][j] == 512){
						putimage(303, 368, &pic512); 
					}
					if(a[i][j] == 1024){
						putimage(303, 368, &pic1024); 
					}
					if(a[i][j] == 2048){
						putimage(303, 368, &pic2048); 
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
