// 2048Game.cpp : �������̨Ӧ�ó������ڵ㡣
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
    //f();printf("�������ҿ��� esc�˳�\n");
	while(1){
		//system("CLS");
		printPic();
		
		if(_kbhit()){
			
			k = _getch();
			if(k==224){
				j=_getch();
				
				show_score();
				system("CLS");

				//��һ���ӿڵ����ƶ������Լ��Ӻͺ���
				if(j==72) API(1);
				if(j==80) API(2);
				if(j==75) API(3);
				if(j==77) API(4); 
				
				if(check()==0){
					//printf("������!!!\n"); 
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
          //printf("�������ҿ��� esc�˳�\n");
       }      
	}
    _getch();
    closegraph();
	return 0;
}