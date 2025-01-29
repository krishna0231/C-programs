//to read a string with multiple word(i.e white space) using scanf() function
#include<stdio.h>
#include<conio.h>
int main (){
char string[100];
printf("Enter Your full name :");
scanf("%[^\n]",string);
printf("your full name is : %s",string);
return 0;
}