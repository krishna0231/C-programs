#include<stdio.h>
int main()
{
int n; 
do {
    printf("enter a number:");
    scanf("%d", &n);
    if(n%7==0){  //if number is divisible by 7 then break the loop
        break;}

    }
    while(1);
    return 0;

}
