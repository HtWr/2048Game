#include "stdafx.h"
#include"graphics.h"
#include <stdio.h>
#include <tchar.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include"Func.h"

extern int a[4][4];
extern int b[16][2];
extern int x; 
extern int y;


void xy(int n){
    if(n==1){ 
		x=-1; y=0;
	}
    if(n==2){
		x=1; y=0;
	}
    if(n==3){
		x =0; y=-1;
	}
    if(n==4){ 
		x=0; y=1;
	}
}

void f(){
    int i, j;
    for(i=0; i<4; i++){
		for(j=0; j<4; j++)
			printf("%4d ", a[i][j]); 
            printf("\n");
	}
}

int f1(int i){
    if(i>=0&&i<4) 
		return 1;
    else 
		return 0;
}

void init(){   //³õÊ¼»¯º¯Êý
	
    int i,j, i1, i2;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            a[i][j]=0;
    do{
		i1 = rand()%16;
        i2 = rand()%16;
    } while(i1==i2);

    a[i1/4][i1%4] = 2;
    a[i2/4][i2%4] = 2;
	
}
 
void nn(){
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
            if(f1(j+y)&&a[i+x][j+y]==0){ 
				a[i+x][j+y]=a[i][j]; a[i][j]=0; k=2; n=1;
			}
 
  
    } 
    return n;
}

int plus(int z){
    int i, j, n=0;
    if(z==1)
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                if(a[j][i]!=0&&f1(j-1))
                if(a[j][i]==a[j-1][i]){
					a[j-1][i]*=2; 
					a[j][i]=0;  
					n=1; 
					break;
				}
    if(z==2)
        for(i=0; i<4; i++)
            for(j=3; j>=0; j--)
                if(a[j][i]!=0&&f1(j+1))
                if(a[j][i]==a[j+1][i]){
					a[j+1][i]*=2; 
					a[j][i]=0; 
					n=1;
					break;
				}
    if(z==3)
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                if(a[i][j]!=0&&f1(j-1))
                if(a[i][j]==a[i][j-1]){
					a[i][j-1]*=2; 
					a[i][j]=0; 
					n=1;
					break;
				}
    if(z==4)
        for(i=0; i<4; i++)
            for(j=3; j>=0 ;j--)
                if(a[i][j]!=0&&f1(j+1))
                if(a[i][j]==a[i][j+1]){
					a[i][j+1]*=2; 
					a[i][j]=0; 
					n=1;
					break;
				}
 
            return n;
}

void xx(int i){
      
    move(i); 
    plus(i); 
    move(i); 
    nn();
    f();     
}

int check(){
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

bool is_win(){
	for(int i = 0;i<4;i++){
	
		for(int j = 0; j<4;j++){
			
			if(a[i][j] == 2048){

				return true;
			}
		}
	}
}