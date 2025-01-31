//write a program to poiint ASCII value of all charecters
#include<stdio.h>
int main()
{
int i;

    for(i=0;i<=255;i++)
{
    printf("ASCII value of charecter %c: %d\n",i,i);
    if(i%24==0) // To display 24 lines per page
    {
        printf("Press any key for next ....");
    }
}
    return 0;

    }
