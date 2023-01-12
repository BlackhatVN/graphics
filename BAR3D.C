#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
bar3d(100,100,200,200,20,1);
getch();
closegraph();
}

