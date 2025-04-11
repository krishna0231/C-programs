// avarage of array elements 
#include<stdio.h>
int main()
{
    int i,a[10];
    int sum=0;
    printf("enter elements whose sum is calculating \n");
    for(i=0; i<10; i++) // Removed the incorrect semicolon
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
     float avg=sum/10;

    printf("sum of array elements is %d\n",sum); // Added newline for better output formatting
    printf("average of array elements is %f\n",avg); // Fixed spelling of "average"
    return 0;
}