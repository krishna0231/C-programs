//Read hight and base of a triangle and find area of it
#include<stdio.h>
#include<conio.h>
int main ()
{
    float height, base, area;
    //clrscr();
   
    printf(" enter height of triangle:");
    scanf("%f",height);
    printf("\nenter base of a triangle");
    scanf("%f",base);
    area=0.5*height*base;
    printf("\narea of triangle is : %.2f",area);
    getch();
   return 0;
   
}
