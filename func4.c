//function with arguments but not return value#
#include<stdio.h>
int addition(int a, int b)
{
    int sum;
    sum=a+b;
    printf("\nThe sum is %d",sum);

}
int main()
{
    int a,b;
    printf("\nEnter two nuumbers:\t ");
    scanf("%d%d",&a,&b);
    addition(a,b);
    return 0;
}