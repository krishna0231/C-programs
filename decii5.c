//calculate the percentage and determine the divisionint of a student in seven subjects
#include<stdio.h>
#include<conio.h>
int main ()
{
    float nep,eng,bio,math,phy,che,comp,percent;
    printf("enter the marks obtained in seven subjects:");
    scanf("%f%f%f%f%f%f%f",&nep,&eng,&bio,&math,&phy,&che,&comp);
    percent=(nep+eng+bio+math+phy+che+comp)/7;
    if(percent>=80)
    {
        printf("distinction");
    }
    else if(percent >=60 && percent <=79)
{
    printf("first division");
}
else if("percent >=45 && percent <=59")
{
printf("second division");
}
else if("percent >=32 && percent <=44")
{
    printf("third division");
}
else
{
    printf("fail");
}
printf("\n Your percentage is :%f",percent);
getch();
return 0;

}