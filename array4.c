// write a program to sort n numbers in ascending order
#include<stdio.h>
int main()
{
    int num[50],i,j,n,temp;
    printf("\nHow many number are there?\t");
    scanf("%d",&n);
    printf("\nenter %d numbers: \n",n);
    for(i=0;i<n;i++)
       scanf("%d",&num[i]);
    for(i=0;i<n-1;i++)
      {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
      }   
      printf("\nThe number in ascending order : \n ");
      for(i=0;i<n;i++)
      printf("\t%d",num[i]);
      return 0;
      
}