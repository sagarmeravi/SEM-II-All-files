#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
int poly[12] ={
350,450,350,410,430,400,350,350,300,430,350,450
}
circle(100,100,50);
outtextxy(75,170,"circle");
getch();
closegraph();
}