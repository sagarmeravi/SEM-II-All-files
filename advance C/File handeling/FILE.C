#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
int a=5;
char str[20];
char b ='s';
clrscr();
fp = fopen("abc.txt","w");//file with extension and method

if(fp==NULL){
printf("Incomplete to create file");
}
else{
printf("File created");
}
printf("\n enter the string");
gets(str);
fprintf(fp,"%d\t%s\t%c",a,str,b);
fclose(fp);
getch();
}