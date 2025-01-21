//to convert cartesprimtian coordinate to polar coordinate
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,y,r,q,angle;
    //clrscr();
printf("enter cartisian co-ordinate x& y");
scanf("%f%f", &x, &y);
r=sqrt(x*x+y*y);
q=atan(y/x); /*gives value of tan inverse in radian*/
angle=180*q/3.1428; /*conversion into degree*/
printf("r is : %f and angle in degree is :%.2f", r, angle);
getch();
return 0;





}