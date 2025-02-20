//write a program that read 10 integers from keyword ,store in n arry and display numbers in the screen 
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i;
    printf("Enter 10 numbers:\t");
    for(i=0;i<10;i++)
    scanf("%d",a[10]);  // array input
    printf("\n You have entered 10 numbers :\n");
    for(i=0;i<10;i++)
    printf("\t a[%d]=%d",i,a[i]); // array output
    getch();

    return 0;
    
}