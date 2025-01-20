//ask name of student and marks obtained by him/her in seven subject,display percentgae assuming full marks 100in each subject
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    float math,phy,chy,bio,eng,comp,hm,total,percent;
    //clrscr();
    printf("enter name of student" : );
    scanf("toata%s", &name);
    printf("enter meaeks in different seven subject:");
    scanf("%f%f%f%f%f%f",math,phy,chy,bio,eng,comp,hm,total,percent);
    total=phy+math+chy+bio+eng+comp+hm;
    percent=total/7*100;
    printf("\nthe percentage of %s is : %f", name,percent);
    getch();
    return 0;
    


}