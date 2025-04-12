#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    int i;
    int fact=1;
    for(i=1;i<=n;i++)
     fact*=i;
  return fact;

    
}
int main()
{
    int n,r;
    printf("enter the value of n \t and r:");
    scanf("%d%d",&n,&r);
    int npr=factorial(n)/(factorial(n-r));
    int ncr=factorial(n)/((factorial(r)*factorial(n-r)));
    printf("\nthe value of npr is %d",npr);
    printf("\n the value of ncr is %d",ncr);
    return 0;

}