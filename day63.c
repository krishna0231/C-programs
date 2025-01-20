#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float a, b, c, discriminant, root1, root2;
    //clrscr();
    printf("enter the coeffficiant of x^2");
    scanf("%f", &a);
    printf("enter the coefficiant of x :");
    scanf("%f", &b);
    printf("enter the constant c:");
    scanf("%f", &c);
    discriminant=b*b-4*a*c;
    root1=(-b+sqrt(discriminant))/(2*a);
    root1=(-b-sqrt(discriminant))/(2*a);
    printf("\nroot1 = %f \f root2 = %f", root1,root2);
    getch();
    return 0;
    



}
