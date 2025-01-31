//calcu;ate factorial of a number using while loop
#include<stdio.h>
int main()
{
    int n;
    long fact=1;
    printf("Enter a number :0");
    scanf("%d",&n);
    int i=1;
    while(i<=n);
    {
        fact=fact*i;
        i++;

    }
    printf("Factorial of a number is : %d",fact);
    return 0;
    

}