//write a program to display series 1/2 2/3 3/4 4/5...n-1/n

#include<stdio.h>
int main(){
int n,i;
printf("enter the value of n:");
scanf("%d",&n);
printf("series:");
for(i=1;i<n;i++) {

    printf("\t %d/%d",i,i+1);}

return 0;
}