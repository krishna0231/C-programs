//assignment operator
#include<stdio.h>
#include<conio.h>
int main ()
{
int a=10,b=5;
b+=a; //b=b+a
printf("\nb=%d",b);
printf("\nb=%d",++b); //b=b+1 and a is return after addition
printf("\nb=%d",--b); //b=b-1 and b is return after substraction
printf("\nb=%d",b++); //first value return and then incremented or decremented
printf("\n=%d",b--);

getch();
return 0;

}