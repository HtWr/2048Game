#include "stdafx.h"
#include"graphics.h"
#include <stdio.h>
#include <tchar.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include"Func.h"

int score = 0;
extern int a[4][4];
extern int b[16][2];
extern int x; 
extern int y;



void xy(int n){
    if(n == 1){ 
		x = -1;
		y = 0;
	}
    if(n==2){
		x = 1;
		y = 0;
	}
    if(n==3){
		x = 0; 
		y = -1;
	}
    if(n == 4){ 
		x = 0;
		y = 1;
	}
}

/*void f(){			//print函数 用于cmd程序测试时生成数组视图函数 （已废弃）
}

    int i, j;
    for(i=0; i<4; i++){
		for(j=0; j<4; j++)
			printf("%4d ", a[i][j]); 
            printf("\n");
	}
}*/

int f1(int i){  //移动时判断移动方向是否可以移动
    if(i>=0&&i<4) 
		return 1;
    else 
		return 0;
}

void init(){   //初始化函数
	
    int i,j, i1, i2;
	//先将数组初始化为0（即为每个空格都为空）
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            a[i][j]=0;

	//生成初始的两个数字2
    do{
		i1 = rand()%16;
        i2 = rand()%16;
    } while(i1 == i2);//i1和i2不能为相同位置

    a[i1/4][i1%4] = 2;
    a[i2/4][i2%4] = 2;
	
}
 
void new_2(){//在游戏内“随机”生成新的2
    int i,j,q;
    p=0;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(a[i][j]==0){
				b[p][0] = i;
				b[p][1] = j;
				p++;
            }
    if(p>=1){
		q = rand()%p;
		a[b[q][0]][b[q][1]] = 2;
    }
 
}
 
int move(int z){
    int i, j, k=1, n=0;
    xy(z);
   // printf("x=%d y=%d\n", x, y);
    while(k){
        for(i=0, k=0; i<4; i++)
        for(j=0; j<4; j++)
            if(a[i][j]!=0)
            if(f1(i+x))
            if(f1(j+y) && a[i+x][j+y]==0){ 

				a[i+x][j+y]=a[i][j];
				a[i][j]=0; 
				k=2; 
				n=1;
			} 
    } 
    return n;
}

int plus(int z){		//加和函数 当数组行或列
    int i, j, n=0;
    if(z==1)
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                if(a[j][i]!= 0 && f1(j-1))
                if(a[j][i]==a[j-1][i]){		
					score += a[j-1][i];			
					a[j-1][i]*=2;
					a[j][i]=0;  
					n=1; 
					break;
				}
    if(z==2)
        for(i=0; i<4; i++)
            for(j=3; j>=0; j--)
                if(a[j][i] != 0 && f1(j+1))
                if(a[j][i]==a[j+1][i]){ 
					score += a[j+1][i];
					a[j+1][i]*=2; 
					a[j][i]=0; 
					n=1;
					break;
				}
    if(z==3)
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                if(a[i][j]!=0 && f1(j-1))
                if(a[i][j]==a[i][j-1]){
					score += a[i][j-1];
					a[i][j-1]*=2; 	
					a[i][j]=0; 
					n=1;
					break;
				}
    if(z==4)
        for(i=0; i<4; i++)
            for(j=3; j>=0 ;j--)
                if(a[i][j]!=0 && f1(j+1))
                if(a[i][j]==a[i][j+1]){
					score += a[i][j+1];
					a[i][j+1]*=2; 					
					a[i][j]=0; 
					n=1;
					break;
				}
 
	return n;
}

void API(int i){
      
    move(i); 
    plus(i); 
    move(i); 
    new_2();
    //f();  //(已废弃)    
}



int check(){		//检查函数 循环检查数组内数字

    int i, j, l, b[4][4], n=0;
    for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                b[i][j] = a[i][j];
 
        for(l=0; l<4; l++){
            for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                a[i][j] = b[i][j];
            if(move(l)!=0) 
				n=1;
        }
        for(l=0; l<4; l++){
            for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                a[i][j] = b[i][j];
            if(plus(l)!=0) 
				n=1;
        }
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                a[i][j] = b[i][j];
    return n;
}

bool is_win(){									//	判断游戏是否胜利
												//  判断条件：二维数组中任意一个位置出现2048
	for(int i = 0;i<4;i++){
	
		for(int j = 0; j<4;j++){
			
			if(a[i][j] == 2048){

				return true;
			}
			else 
				return false;
		}
	}	
}

void show_score(){

	BeginBatchDraw();

	IMAGE REC;
	loadimage(&REC, "rescore.jpg");
	putimage(276, 17, &REC); 

	TCHAR score_s[5];
	_stprintf_s(score_s, _T("%d"), score);
	LOGFONT front;
	gettextstyle(&front);                     
	front.lfHeight = 23;                      
	_tcscpy_s(front.lfFaceName, _T("黑体"));    
	front.lfQuality = ANTIALIASED_QUALITY;    // 设置输出效果为抗锯齿  
	settextstyle(&front);  
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	//outtextxy(278, 18,score_s);
	RECT r = {278, 18, 380, 53};
	drawtext(score_s,&r,DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	EndBatchDraw();
	FlushMouseMsgBuffer();
	
}