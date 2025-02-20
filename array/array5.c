#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0;i<4;i++)
    {
        printf("Eneter the the vlue of %d elements of the arry \n");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("The values of %d elements of the array is %d\n",i,marks[i]);
        
    }
    return 0;
    
}