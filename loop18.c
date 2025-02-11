//comput the sum of the digits of given interger number.
#include<stdio.h>
int main()
{
    int num,r,q,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    do{
        q=num/10;
        r=num%10;
        num=q;
        sum=sum+r;
    }
    while(q!=0);
    printf("\nThe sum of didgits is :\t%d",sum);
    return 0;
    
}