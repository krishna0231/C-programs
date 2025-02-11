#include<stdio.h>
#include<conio.h>
int main()
{
    int nsecs,hours,minutes,secs;
    printf("Enter time in seconds:");\
    scanf("%d",&secs);
    hours=nsecs/3600;
    minutes=(nsecs-hours*3600)/60;
    secs=nsecs-(hours*3600)-(minutes*60);
    printf("The time in hour, minutes and second is :");
    printf("%d Hrs %d Minutes %d seconds", hours, minutes,secs);
    getch();
    return 0;
    

}