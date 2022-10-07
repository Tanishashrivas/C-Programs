#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    line(100,200,300,400);
    getch();
    return 0;
}Closegraph();