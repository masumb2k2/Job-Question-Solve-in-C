#include<stdio.h>
#define PI 3.1416

int main(){
    float radious,area;
    printf("Enter Radious of Circle: ");
    scanf("%f",&radious);
    area=PI*radious*radious;
    printf("area of Circle is : %.2f",area);
    return 0;
}
