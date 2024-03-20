#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
int x=50,y=100;
initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
getbkcolor();
outtextxy(x,y,"hello world");
getch();
closegraph();
}