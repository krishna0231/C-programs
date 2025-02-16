/* that reads marks percentage in an examiantion of 10 students .calculates and display the average percentage 
nad deviation from average of each student*/
#include<stdio.h>
int main()
{
    float marks[10],avg,dev,sum=0;
    int i;
    printf("\n Enter percentage of 10 students\n");
    for(i=0;i<10;i++)
    {
        printf("\tmarks[%d]",i);
        scanf("%f",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/10;
    printf("\nThe average marks is \t %=.2f",avg);
    printf("\n The diviation of each students form average \n");
    for(i=0;i<10;i++)
    {
        dev=marks[i]-avg;
        printf("\n marks[%d]=.2f\tdeviation=%.2f" ,i,marks[i],dev);

    }
    return 0;
}