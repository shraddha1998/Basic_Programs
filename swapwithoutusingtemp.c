//Write a program to swap two numbers using a temporary variable.

#include<stdio.h>
int main()
{
int a, b,temp;
printf("Enter two numbers ");
scanf("%d %d",&a,&b);
printf("Before swapping a=%d and b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a=%d and b=%d\n",a,b);
return 0;

}

