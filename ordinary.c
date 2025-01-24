//to show the use of ordinary charecter in control stiring of scanf() function
// ordinary charecter are included in scanf() function to take input in certain pattern
#include<stdio.h>
#include<conio.h>
int main()
{
    int day, month,year;
    printf("enter your date of birth in sequence :");
    printf("day,month and year separated by / charecter :");
    scanf("%d%d%d",&day, &month, &year); //Note '/'
printf("your date of birth is : %d day  %d month  %d year", day, month,year);
getch(); //
return 0;
}