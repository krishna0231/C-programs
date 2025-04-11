// sum of digits present in given number
#include<stdio.h>
int main(){
    int n,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    do{
        r=n%10;
        sum+=r;
        n=n/10;
    }
    while(n!=0);
    printf("\nThe sum of gigit of givrn number is=%d",sum);
return 0;
}