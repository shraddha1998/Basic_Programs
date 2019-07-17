//to print'xay'in place of every'a'in a string.
#include<stdio.h>
int main()
{
int i=0;
char str[50];
printf("Enter string ");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='a')
{
       printf("x");
	printf("%c",str[i++]);
       printf("y");
}
else
	printf("%c",str[i++]);
}
printf("\n");
return 0;
}
