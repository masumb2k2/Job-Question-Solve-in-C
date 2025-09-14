#include<stdio.h>
int main(){
    float base,height,area;
    printf("Enter Base & Height of Triangle: ");
    scanf("%f%f",&base,&height);
    area=0.5*base*height;
    printf("Area of Right Triangle : %.2f",area);
    return 0;
}
