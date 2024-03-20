#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
int x =320, y=240,rad;
initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
for(rad = 25; rad <=125;rad=rad+20){
circle(x,y,rad);
}
getch();
closegraph();
}