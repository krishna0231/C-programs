//program to input string from the user such that the string consists of only upper case letters
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[30];
    printf("enter string having upper case letter only:");
    scanf("%[A-Z]",str);
    printf("\n the string is : %s", str);
    getch();
    
}