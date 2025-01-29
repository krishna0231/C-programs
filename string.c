//a progaram to input string from user and display it on screen
#include<stdio.h>
#include<conio.h>
int main()
{
    char string[10];
    printf("Enter your name :");
    scanf("%2s", &string);
    printf("Eneter Your name is :%s",string);
    getch();
    return 0;

}