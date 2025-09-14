#include<stdio.h>
int main(){
    float feet,meter;
    printf("Enter LEngth in feet :");
    scanf("%f",&feet);
    meter=feet/3.28;
    printf("Length in Meter : %.2f",meter);
    return 0;
}
