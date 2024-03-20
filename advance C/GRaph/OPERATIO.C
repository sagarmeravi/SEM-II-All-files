#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
line(50,125,100,125);
line(50,175,100,175);
line(100,100,100,200);
line(100,200,150,150);
line(150,150,100,100);
line(125,100,125,125);
line(125,175,125,200);
line(150,150,200,150);


getch();
closegraph();
}