//write a program that should allow to input uppercse letter only
#include<stdio.h>
#include<conio.h>
int main()
{
    char string[10];
    printf("Enter your name in uppercse:");
    scanf("%[A-Z]", string);
    printf("Your name is %s", string);
    getch();
    return 0;
    
}