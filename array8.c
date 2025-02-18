//initialise 3-D array
#include<stdio.h>
int main()
{
    int marks[3][2][4]=
    {
      {{2,4,6,8},{1,3,5,7}},
      {{9,2,4,3},{3,4,5,8}},
      {{8,4,1,2},{9,4,5,3}}
      };
      int i,j,k;
      for(i=0;i<3;i<i++)
      {
        printf("\n\n The table number :%d",i);
        for(j=0;j<2;j++)
        {
            printf("\n Row number :%d",j);
            for(k=0;k<4;k++)
            printf("\t%d",marks[i][j][k]);
        }
      }
    return 0;
}