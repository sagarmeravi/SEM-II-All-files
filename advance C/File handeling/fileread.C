#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
char getinput[50];
char filename[50];
clrscr();
printf("Enter the File name to be showed:\n");
gets(filename);
fp = fopen(filename,"r");
printf("file opened Succesfully\n");
while(fgets(getinput,50,fp)!=NULL){
printf("%s",getinput);
}
printf("\n\nfile readed succesfully");
fclose(fp);
 getch();
}