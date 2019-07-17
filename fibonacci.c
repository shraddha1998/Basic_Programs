
#include<stdio.h>
int main()
{
int fib[50],n,i;
printf("Enter no. of elements in series ");
scanf("%d",&n);
fib[0]=0;
fib[1]=1;
for(i=2;i<n;i++)
{
fib[i]=fib[i-1]+fib[i-2];
}

for(i=0;i<n;i++)
{
printf("%d ",fib[i]);
}


}

