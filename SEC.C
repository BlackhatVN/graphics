#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
sector(200,200,0,150,25,50);
getch();
closegraph();
}

