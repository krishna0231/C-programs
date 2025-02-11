//2+4+6+8+...up to n terms
#include<stdio.h>
int main()
{
    int n,i,sum=0,term;
    printf("enter a nunber: \t");
    scanf("%d",&n);
    for(i=1,term=2;i<=n;i++,term+=2);
    {
        sum+=term;
    }
    printf("enter the sum id :\t%d",sum);
    return 0;
}