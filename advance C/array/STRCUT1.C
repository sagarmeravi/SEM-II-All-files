#include<stdio.h>
#include<conio.h>
void main(){
struct stud{
int rollno;
char name[10];
float mark;
int fees;
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
	printf("enter the student mark");
       scanf("%f",&s[i].mark);
	printf("enter the student fees");
       scanf("%d",&s[i].fees);
		}
//printing student value
   for(i=0;i<n;i++){
       printf("the roll no of stud[%d] student is %d \n",i,s[i].rollno);
       printf("the roll no of stud[%d] student is %s\n",i,s[i].name);
       printf("the mark  of stud[%d] student is %f\n",i,s[i].mark);
       printf("the fees of stud[%d] student is %d \n",i,s[i].fees);
	}
getch();

}