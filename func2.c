// write a program illustrate the "function with arguments and reutrn values 
#include<stdio.h>
int addition(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;

}
int main()
{
    int a,b,sum;
    printf("\nEnther the two number a and b:\t");
    scanf("%d%d",&a,&b);
    sum=addition(a,b);
    printf("\nthe sum is \t",sum);
    return 0;
}