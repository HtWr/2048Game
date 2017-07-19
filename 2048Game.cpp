// 2048Game.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "graphics.h"
#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "Draw.h"
#include "Func.h"

int a[4][4];
int b[16][2];
int x; 
int y;


int _tmain(int argc, _TCHAR* argv[]){

	initgraph(400,470);

	IMAGE TOP;
	loadimage(&TOP, "top.jpg");
	putimage(0, 0, &TOP);

	int i;
    int j;
    int k;
	srand((int)time(0));
    init();
    //f();printf("上下左右控制 esc退出\n");
	while(1){
		//system("CLS");
		printPic();
		
		if(_kbhit()){
			
			k = _getch();
			if(k==224){
				j=_getch();
				
				show_score();
				system("CLS");

				//用一个接口调用移动函数以及加和函数
				if(j==72) API(1);
				if(j==80) API(2);
				if(j==75) API(3);
				if(j==77) API(4); 
				
				if(check()==0){
					//printf("玩死了!!!\n"); 
					IMAGE LOSE;
					loadimage(&LOSE, "lose.bmp");
					putimage(0, 70, &LOSE); 
					break;
				}
				if(is_win() == true){
					
					IMAGE WIN;
					loadimage(&WIN, "win.jpg");
					putimage(0, 70, &WIN); 
					break;
				}
			}
          else if(k==27) 
			  break;
          //printf("上下左右控制 esc退出\n");
       }      
	}
    _getch();
    closegraph();
	return 0;
}