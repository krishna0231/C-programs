// write a program to calculate sum of square of real 
#include<stdio.h>
#include<conio.h>
int main(){
int n, sum=0,i;
printf("\nEnter n t:\t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum+=i*i;
}
printf("\nThe sum is : \t%d",sum);
getch();
return 0;
}
