//to initislize 2-D array and dispaly its elements
#include<stdio.h>
int main()
{
    int mat[2][3]={{1,2,3},{10,20,40}};
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("\n Row number is =%d",i);}
        for(j=0;j<3;j++)
        {
            printf("\t%d",mat[i][j]);

        }
    return 0; 

    }