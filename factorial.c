#include<stdio.h>
int fact(int n)
{
	if(n<1)
	{
		return 1;
	}

	else
	{
		return n*fact(n-1);
	}

}

int main()
{
int n,i;
printf("Enter the number ");
scanf("%d",&n);
i=fact(n);
printf("Factorial of the number %d is %d\n",n,i);
return 0;
}
