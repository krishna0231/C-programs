//write a program to compute of numbers nCr without using function
#include<stdio.h>
int main()
{
    int f1=1,f2=1,f3=1,comb;
    int n,c,r,i;
    printf("enter number n & r:");
     scanf("%d%d",&n,&r);
     for(i=1;i<=n;i++){     
         f1=f1*i; // to \calculate n!
     }
     for(i=1;i<=(n-r);i++){   // to calculate n-r!
        f2=f2*i;
     }
     for(i=1;i<=r;i++){ // to calculate r!
        f3=f3*i;
     }
     comb=f1/(f2*f3);
     printf("combination is %d",comb);
     return 0;
}
