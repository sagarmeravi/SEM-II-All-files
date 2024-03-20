
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm;
int x=75,y=75,f,i=2;
initgraph(&gd,&gm,"C:\\TC\\bgi");
outtextxy(20,40,"THIS IS DIFFERENT FONTS");
for(f=0;f!=10;f++,i++){
settextstyle(f,HORIZ_DIR,2);
outtextxy(x,y,"HELLO HI BY");
setcolor(i);
y=y+20;
}
getch();
closegraph();
}