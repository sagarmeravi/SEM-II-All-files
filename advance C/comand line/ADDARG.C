#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[]){
int a,b,c;
 a=atoi(argv[1]);
 b=atoi(argv[2]);
 c=a+b;
if(argc<3){
	printf("THe entered arguments are less");
}else{
	printf("%d",c);
}
getch();
}