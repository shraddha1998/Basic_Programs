//Write a program to find the greatest among ten numbers.

#include<stdio.h>
int main(){
int a[50],i,max=0;
printf("Enter 10 elements ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<10;i++)
{
if(a[i]>max)
	max=a[i];
}
printf("Greatest of 3 numbers is %d\n",max);

return 0;
}
