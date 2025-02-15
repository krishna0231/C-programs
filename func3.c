//function with no return value and no arguments 
#include<stdio.h>
void addition()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);

}
int main()
{
    addition();
    return 0;
}
