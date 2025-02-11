// area of three sides of triangle 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("enter three sides a,b and c :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n the area of triangle is : %f",area);
    return 0;
}