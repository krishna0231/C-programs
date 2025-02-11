// write a program to display multiplication table of 5-10.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}