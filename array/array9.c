// write a program that reads a matrix of size 2*3  and display it in the screen
#include<stdio.h>
int main()
{
    int matrix[2][3],i,j;
    for(i=1;i<2;i++)
    for(j=0;j<3;j++)
    {
    printf("Enter the ,matrix[%d][%d]:\t",i,j);
    scanf("%d",&matrix[i][j]);

}
printf("the entered matrix is :\n");
for(i=0;j<3;j++)
{
    for(i=0;i<2;i++)
    printf("%d\t",matrix[i][j]);
    printf("\n");

}
return 0;
}

