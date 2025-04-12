#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
           return 0;
        else

           return 1;
    }
    }
    int main()
    {
        int n;
        printf("enter a numner :");
        scanf("%d",&n);
        if(isprime(n))
        {
            printf("%d is prime number",n);
        }
        else
        {
            printf("%d is not prime number",n);

        }
        return 0;
        
        }

    
