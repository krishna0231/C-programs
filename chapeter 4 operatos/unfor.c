//using getchar() function and display in the screen using putchar() function
#include<stdio.h>
#include<conio.h>
int main()
{
	char gender;
	printf("Enter gender M or F:");
	gender=getchar(); // it is used in place of scanf() function 
	printf("your gender is :");
	putchar(gender);  // it used to display output on the screen
	getch();n
	return 0;
	
}