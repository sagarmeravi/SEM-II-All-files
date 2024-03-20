#include<conio.h>
#include<stdio.h>
#include<stdlib.h> //declared for exit(0)
void main(){
FILE *fp;
char filename[20],c;
printf("enter the file name to open\n");
scanf("%s",filename);
fp = fopen(filename,"r");
if(fp==NULL){
printf("Cannot open file");
exit(0);
}
while(c!=EOF){
printf("%c",c);
c=fgetc(fp);
}
fclose(fp);
getch();
}