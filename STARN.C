#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int gd=DETECT,gm,i,m;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
while(!kbhit())
{
cleardevice();
for(i=1;i<=2000;i++)
{
m=0;
setbkcolor(3);
putpixel(random(640),random(500),RED);
}
settextstyle(1,0,8);
setcolor(8);
outtextxy(14,200,"Code with vn");
delay(1200);
}
getch();
closegraph();
}