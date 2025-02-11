//program to calculate the volume,area of sphere
#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,volume,area;
printf("enter radius of circle:");
scanf("%f",&radius);
volume=(4/3)*3.14*radius*radius*radius;  //volume of sphere is (4/3)*PI*r*r*r
area=4*3.14*radius*radius;               // area of sphere is 4*PI*r*r
printf("\nvolume of sphere: %f",volume);
printf("\nArea of sphere is :%f",area);
getch();
return 0;

}






