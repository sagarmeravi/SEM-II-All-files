#include<conio.h>
#include<stdio.h>
#include<stdlib.h> //declared for exit(0)
void main(){
FILE *fp,*fp1;
char filename[20],c;
char filename2[20];
clrscr();
printf("enter the first File name \n");
scanf("%s",filename);
printf("enter the files in which content to be transfered\n");
scanf("%s",filename2);
fp = fopen(filename,"r");
fp1= fopen(filename2,"w");
if(fp==NULL){
printf("Cannot open file");
exit(0);
}
while((c = fgetc(fp))!=EOF){
fputc(c,fp1);
}
printf("File copied succesfully");
fclose(fp);
fclose(fp1);
getch();
}