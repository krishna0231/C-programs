//find compound interest fpr a give principal amount 'p', time't' in years and rate 'r'%.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float p,t,r,i;
printf("enter principal in amount : ");
scanf("%f", &p);
printf("enter time t in year  : ");
scanf("%f", &t);
printf("enter rate r in percent : ");
scanf("%f", &r);
i=p*(pow(1+r/100,t)-1);
printf("compound interest is  :Rs. %f",i);
getch();
return 0;
}




