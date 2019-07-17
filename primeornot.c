//Write a program to check whether the given number is a prime.

#include<stdio.h>
int main(){
int a,i,count=0;
printf("Enter a number ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
	count++;
}
if(count==2)
	printf("%d is a prime number\n",a);
else
	printf("%d is not a prime number\n",a);
return 0;
}

