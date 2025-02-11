#include<stdio.h>
#include<conio.h>
int main ()
{
    int marks;
    printf("Enter your marks(<100):");
    scanf("%2d",&marks);                 //field width 
    printf("your entered marks is :%d", marks);
    getch();
    return 0;
}