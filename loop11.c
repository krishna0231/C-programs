//find sum of n natural number using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n whose sum you want to calculate:");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n) //loop to calculate the sum first n natural numbers
    {
        sum=sum+i;
        i++;

    }
    printf("The sum of first n natural number is :%d\n",sum);
return 0;    
}

