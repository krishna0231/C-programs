//to calculate factorial if a number using while loop
#include<stdio.h>
int main()
{
    int num,i=1;
    long fact=1;
    printf("Enter a number whose factorial is to be calculated:");
    scanf("%d", &num);
    while(i<=num)
    {
        fact=fact*i;
        i++;

    }
    printf("Factorial is :%1d", fact);
    return 0;
    

}