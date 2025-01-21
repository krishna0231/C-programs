//type conversion
#include<stdio.h>
#include<conio.h>
int main()
{
    int x, p=2,q=4;
    float t=9.7;
    //x=p+q+t  //illegal
    x=p+q+(int)t;
    printf("Data im int format is : %d",x);
    getch();
    
     
}