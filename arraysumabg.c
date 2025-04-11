#include<stdio.h>
int main()
{
    int n,a[n],sum=0,i;
    printf("enter no onf array elements\n");
    scanf("%d",&n);
    printf("enter array elemts \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    
    sum=sum+a[i];}
    float avg=sum/n;
    printf("sum is%d and avg is %f",sum,avg);
return 0;
}

