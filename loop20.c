//1+2+3+4+5+...+n
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    sum+=i;}
    printf("\nThe sum is :\t%d",sum);
    return 0;
}
