//write a prigram which read a number N and generate following series: for N=3, the series is : 3 2 1 0 1 2 3
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a nuber n:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        printf(" %d",i);
    }
    for(j=0;j<=n;j++)
    {
        printf(" %d",j);
    }
    return 0;
    
}