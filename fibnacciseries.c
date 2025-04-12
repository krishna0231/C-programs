#include<stdio.h>
#include<conio.h>
int fib(int n)
{
    if(n==1)
     return 1;
    else if(n==2)
        return 1;
    else
        return(fib(n-1)+fib(n-2));


}

int main()
{
    int terms,i;
    printf("emter the numbere of terms :");
    scanf("%d",&terms);
    for(i=0;i<=terms;i++)
    printf("\t%d",fib(i));
getch();
return 0;
}