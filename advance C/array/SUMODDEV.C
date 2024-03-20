#include<stdio.h>
#include<conio.h>
void main(){
int arr[5];
int i;
clrscr();
printf("enter the numbers:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
int sumeven=0;
int sumodd=0;
for(i=0;i<5;i++){
	if(arr[i]%2==0){
	  sumeven=arr[i]+sumeven;
		}
		else{
		sumodd=arr[i]+sumodd;
			}
	}
printf("the sum of odd %d\n",sumodd);
printf("the sum of even number %d\n",sumeven);

getch();

}