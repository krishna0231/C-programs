#include<stdio.h>

int main(){
    int blood_pressure;
    printf("enter blood_pressure \n");
    scanf("%d", &blood_pressure);

    if(blood_pressure>=90  && blood_pressure<=120){
        printf("normal \n");
    }
    else if(blood_pressure>120 && blood_pressure<=140){
        printf("pre-hypertension \n");
    }
    else if(blood_pressure>140 && blood_pressure<=160){
        printf("stage 1 hypertension \n");
    }
    else if(blood_pressure>160 && blood_pressure<=180){
        printf("stage 2 hypertension \n");
    }
    else if(blood_pressure>1800){
        printf("hypertension crisis \n");
    }
    else{
        printf("low blood_peressure \n");
    }
    return 0;
}