//asks three coefficients of quadratic equation and calculate its root
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,discriminant,root1,root2;
//clrscr();
printf("enter coefficient of x^2:");
scanf("%f", &a);
printf("enter coefficient of x:");
scanf("%f", &b);
printf("enter constant :");
scanf("%f", &c);
discriminant=b*b-4*a*c;
root1=(-b+sqrt(discriminant))/(2*a);
oot1=(-b-sqrt(discriminant))/(2*a);
printf("\nroot1 is : %f \t root2 is : %f",root1,root2);
getch();
return 0;


}