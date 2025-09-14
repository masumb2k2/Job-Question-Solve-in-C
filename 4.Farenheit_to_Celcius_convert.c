#include<stdio.h>
int main(){
    float celcius,farenheit;
    printf("Enter Tempareture in Farenheit: ");
    scanf("%f",&farenheit);
    celcius=((farenheit-32)*5)/9;
    printf("Tempareture in Farenheit: %.2f",celcius);
    return 0;
}
