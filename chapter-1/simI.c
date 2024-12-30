#include<stdio.h>
 //simple interest
 int main(){
    float p,r,t,si;
printf("enter p,r,t\n");
scanf("%f %f %f", &p,&r,&t);
printf("si: %f" ,p*t*r/100);
return 0;
 }