// write a program to calculate size of an arrry programmatically
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[]={20,34,50,4,32,10},size;
    size=sizeof(num)/sizeof(int);
    printf("size of arry is :%d",size);
    getch();
    return 0;
    
}