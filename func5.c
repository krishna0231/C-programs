// write a progarm to illustrate the local variable 
#include<stdio.h>
long fact(int n)
{


int i;
long int f=1;
for(i=1;i<=n;i++)
    f*=1;
    return(f);
}
int main() {
    int num=5;
    printf("The factorial of 5 is %1d",fact(num));
    return 0;
}

