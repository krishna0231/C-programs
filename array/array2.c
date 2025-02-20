//the memory location  allocated by each arry elemnts
#include<stdio.h>
int main()
{
  float a[]={10.4,45.9,5.5,0,10.6};
  int i;
  printf("The contineous memory location are :\n");
  for(i=0;i<5;i++)
   printf("\t%u",&a[i]); //adresss of array elements 
}