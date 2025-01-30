//marks obtained by a student in plus2 and SLC ,dislay congratulatiom !!!!, you have obtained first division both
#include<stdio.h>
#include<conio.h>
int main ()
{
float SLC_per,plus2_per;
printf("enter the percantage obtained in SLC and plus2:");
scanf("%f%f",&SLC_per, &plus2_per);
if(SLC_per>=60)
{
    if(plus2_per>=60)
{
    printf("congratulation!!!\n");

    printf("you have obtained first division in both SLC and plus2\n");

}    
}
getch();
return 0;
}