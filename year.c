// converts given number of days into years, months and days
#include<stdio.h>
#include<conio.h>
int main()
{
    int ndays,months,years,days;
    printf("enter number of days:");
    scanf("%d,&ndays");
    years=ndays/365;
    months=(ndays*365)/(30);
    days=ndays-(years*365)-(months*30);
    printf("\nYears :%d",years);
    printf("\nMonths: %d",months);
    printf("\n Days :%d", days);
    getch();
    
    return 0;
}