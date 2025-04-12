#include<stdio.h>
int factorial(int n)
{
    if(n==1 || n==0)
       return 1;
    else
       return(n*factorial(n-1));

}
int main()
{
    int num;
    printf("\nenter the number nwhose factoreial is to be calculated");
    scanf("%d",&num);
    printf("\n\n\nfactirial =%d",factorial(num));
    return 0;

}