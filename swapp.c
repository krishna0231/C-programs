#include<stdio.h>
void swapp(int * ,int *);
int main() 
{
int a,b;
printf("Before swapping a and b:");
scanf("%d%d",&a,&b);
swapp(&a,&b);
printf("\nafter swapp a= %d and b=%d :",a,b);
return 0;

}
void swapp(int *c,int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
}