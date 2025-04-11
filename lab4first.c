//write a program that reads  two intereger and three functions mamed add ,substract and multiplication  to perform the operations 


#include<stdio.h>
int add(int a, int b) 
{
    return(a+b);
}  // function to add two numbers
int substract(int a, int b){
    return(a-b);
}
int multiplication(int a,int b)
   {
    return(a*b);
   }
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("addition of two numbers is = %d\n",add(a,b));
    printf("substraction of two numbers is = %d\n",substract(a,b));
    printf("multiplication of two number is = %d \n",multiplication(a,b));
    return 0;
}
