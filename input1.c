#include<stdio.h>
#include<conio.h>
int main()
{
    int n1;
    char ch;
    
printf("enter a number :");
scanf("%d", &n1);
printf("\n Enter a charecter:");
scanf(" %c", &ch);       // Note a space before %c, it required to skip the 'return' charecter input process
printf("\nNumber : %d \t Charecter :%c",n1, ch);
getch();
return 0;

}