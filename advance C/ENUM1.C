#include<stdio.h>
#include<conio.h>
//this is enum declartion and initialization
enum weekday{
sunday = 1, monday,tuesday,thursday,friday,saturday
};

void main(){
//variable declaration
enum weekday w;
w = monday;
clrscr();
printf("the value of monday will be %d",w);
getch();
}