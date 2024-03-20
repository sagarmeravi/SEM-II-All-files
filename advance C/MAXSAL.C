#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
int i,ch;
int id;
char name[20];
int max = 0;
struct emp{
int eid;
char ename[20];
int salary;
char desg[20];
char addr[20];
}e[4];
clrscr();
for(i = 0; i< 4; i++){
printf("enter the employee id\n");
scanf("%d",&e[i].eid);
printf("enter the employee name\n");
scanf("%s",e[i].ename);
printf("enter the employee salary\n");
scanf("%d",&e[i].salary);
printf("enter the employee desgination\n");
scanf("%s",e[i].desg);
printf("enter the employee adressd\n");
scanf("%s",e[i].addr);
}
for(i = 0;i<4;i++){
if(e[i].salary>max){
max = e[i].salary;
id = e[i].eid;
strcpy(name, e[i].ename);
}
}printf("\n\n");
 printf("%d is max salary\n",max);
printf("the name of emp is %s\n",name);
printf("the eid of emp is %d\n",id);
getch();
}