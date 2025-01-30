//among three numbers which is largest
#include<stdio.h>
#include<stdio.h>
int main ()
{
    int n1,n2,n3;
    printf("Enete three numbers:":);
    scanf("%d%d%d", &n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        printf("largest= %d",n1);
    else
    printf("largest=%d",n3);

    }
else {
    if(n2>n3)
    printf("largest=%d",n2);
else
printf("largest=%d",n3);

}
return 0;

}