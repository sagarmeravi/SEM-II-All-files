#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");

rectangle(100,150,200,200);//body
rectangle(50,200,100,170);//head
line(100,200,200,200);//base
circle(50,200,10);//tyre
circle(200,200,10);//tyre
circle(100,200,10);//tyre
getch();
closegraph();
}