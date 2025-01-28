//comma operator can be used to linked eakated expression together
#include<stdio.h>
#include<conio.h>
int main ()
{
int n1 , n2, n3, n4,n5;
n3 = (n1 = 50, n2 = 10, n1+n2);
n5=(n4=10,n3+n4);
printf("n3=%d\tn5=%d",n3,n5);
getch();
return 0;


}