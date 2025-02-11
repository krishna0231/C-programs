/*syntax of for for loop is for(initialization; test condition; increment/decrement)
{
statements; or body of loo
}*/;
#include<stdio.h> 
#include<conio.h>
int main()
{

int i, num;
long fact=1;
printf("\nenter a number whose factorial is t be calculated :");
scanf("%f", &num);
for(i=1;i<=num;i++);
fact*=i;
printf("\n factolrial is : %1d", fact);
getch();

return 0;
}
