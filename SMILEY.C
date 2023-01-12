#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
circle(300,220,150);
circle(230,158,30);
circle(370,158,30);
arc(300,220,200,340,120);
line(188,262,412,262);
sound(700);
delay(2000);
nosound();
getch();
closegraph();
}