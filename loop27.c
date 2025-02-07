#include<stdio.h>
int main()
{
    int n,i;
    float sum=1,term=1,x;
    printf("\nenter n and x: \t");
    scanf("%d%f",&n,&x);
    for(i=1;i<n;i++)
    {
        term*=1/x;
        sum+=term;
    }
    printf("\nThe sum is :%f",sum);
    return 0;
}