// write a program to calculate the series S=1+2*1+3*2+...n(n-1)
#include<stdio.h>
int main()
{
    int i,n;
    long int sum=1;
    printf("\n enter value of n:"); //how many terms ? means n terms
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    sum=sum+i*(i-1);
    printf("The sum 1+2*1+3*2+...+n*(n-1):%d",sum);
    return 0;
    

}