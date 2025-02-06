// write a program to calculate the sum of cube of real number
#include<stdio.h>
int main()
{
    int sum=0,i,term,n;
    printf("\n Enter n: \t");
    scanf("%d",&n);
    for(i=1;term=2;i<=n;i++,term+=2)
    {
        sum+=term*term*term;
    }
    printf("\nThe sum is :\t%d",sum);
    
    return 0;
}