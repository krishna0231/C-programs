// write a program to find HCF and LCM of two number
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a number :");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        count++;

    }
    printf("Total digits is :%d",count);
    return 0;
}