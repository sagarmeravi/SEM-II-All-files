#include<stdio.h>
#include<conio.h>
void main(){
int arr[5]; int i;clrscr();
printf("enter the value of array");
for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	}
      int sum = 0;
for(i=0;i<5;i++){
	sum=sum+arr[i];
	}
printf("the sum of 5array will be %d\n",sum);
getch();
}