//write a program to find cubes of squres of first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("enter\nn\tsquare\tcube");
    for(i=1;i<=10;i++)
    {
        printf("\n%d\t%d\t%d",i,i*i,i*i*i);
    }
    return 0;
    
}