#include<stdio.h>
int main()
{ int i,j;
    int marks[2][4]={{5,7,3,2},
                    {8,6,76,12}};
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<4;j++)
        {
     
     printf("The values of %d,%d elements of the array is %d\n",i,marks[i][j]);
    }
}
return 0;
}
