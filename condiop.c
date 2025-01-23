#include<stdio.h>
int main ()
{
    int a=10,b=20;
    int max;
    //conditional operator to find the maximum value
    max=(a>b) ? a : b;
    printf("\n The maximum value is : %d",max);
    return 0;
}