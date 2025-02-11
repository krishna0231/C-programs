#include<stdio.h>
#include<conio.h>
int main()
{
    float amount=1000.3;
    float amt_discount,discount;  // note amt_discount is amount after discount
printf("enter amount for costumer is:");
scanf("%f",&amount);
discount=(amount/100)*10;
amt_discount=amount-discount;
printf("Discount amount is :%f",discount);
printf("Amount after discount is :%f",amt_discount);
getch();
return 0;
}