//print the sum the first n natural numbers 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n whose sum you want to calculate:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++) //loop to calculate the sum first n natural numbers
    {
        sum=sum+i; }
                     // using do while loop to calculate the sum of first n natural numbers
       printf("The sum of first n natural number is :%d\n",sum);
    return 0;
}