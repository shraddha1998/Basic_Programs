//Write a program to check whether the given number is even or odd.

#include<stdio.h>
int main()
{
int i,n;
printf("Enter the number");
scanf("%d",&n);
if(n%2==0)
	printf("Number %d is even\n",n);
else
      printf("Number %d is odd\n",n);
return 0;
}
