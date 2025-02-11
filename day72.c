//printing value of charecter and string
#include<stdio.h>
int main()
{
    char ch='a';
    char str[20] ="I love Nepal";
    printf("case1 value of ch=%c",ch);
    printf("\n case2 value of ch=%10c", ch);
    printf("\n case3 value of str = %s", str);
    printf("\n case4 value of str =%18c",str);
    printf("\n case5 value of str = %15.8s",str);
    return 0;
    
}