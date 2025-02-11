
//using if else statement wether the number is even or odd
#include<stdio.h>
#include<conio.h>
int main(){
int num, remainder;
printf("Eneter an number:");
scanf("%d", &num);
remainder= num % 2;                //modulo division
if(remainder == 0) {
    printf("The number is even");
}
else {
    printf("The number is odd");
    }

return 0;
}