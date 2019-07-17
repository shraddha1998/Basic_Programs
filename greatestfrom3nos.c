//greatest of 3 numbers

#include<stdio.h>
int main(){
int a, b, c;
printf("Entera,b,c: \n");
scanf("%d %d %d",&a,&b,&c);
if (a>b&&a>c){
printf("a is Greater than b and c\n");
}
else if (b>a&&b>c){
printf("b is Greater than a and c\n");
}
else if (c>a&&c>b){
printf("c is Greater than a and b\n");
}
else{
printf("all are equal or any two values are equal\n");
}
return 0;
}
