
#include<stdio.h>
#include<conio.h>
void main(){
struct stud{
int rollno;
char name[10];
char gen[10];
int sci,sst,math,mark;
float perc;
}s[15];
int n;int i;clrscr();
printf("enter the value of student to be entered");
scanf("%d",&n);
//accepting studentvalue from user
	for(i=0;i<n;i++){
	printf("enter the name ");
	scanf("%s",s[i].name);
       printf("enter the student roll no");
       scanf("%d",&s[i].rollno);
	printf("enter the student science marks");
       scanf("%d",&s[i].sci);
	printf("enter the student math mark");
       scanf("%d",&s[i].math);
	printf("enter the student sst mark");
       scanf("%d",&s[i].sst);
	printf("enter the student gender");
       scanf("%s",s[i].gen);
       s[i].mark=s[i].sst + s[i].math + s[i].sci;
      s[i].perc =(float)s[i].mark/300
       *100;
		}
//printf("choose
//switch(a){
//case 1:


   for(i=0;i<n;i++){
       printf("the roll no of %d student is %d \n",i,s[i].rollno);
       printf("the roll no of %d student is %s\n",i,s[i].name);
       printf("the science mark  of %d student is %d\n",i,s[i].sci);
      printf("the math mark  of %d student is %d\n",i,s[i].math);
      printf("the sst mark of %d student is %d \n",i,s[i].sst);
      printf("the gender %d of student is %s\n",i,s[i].gen);
      printf("the perentage of % d student is %f",i,s[i].perc);
	}
getch();

}