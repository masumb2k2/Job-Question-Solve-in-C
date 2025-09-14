#include<stdio.h>
int main()
{
    float height,width,area;
    printf("Enter Height & width of Rectriangle: ");
    scanf("%f%f",&height,&width);
    area=height*width;
    printf("Area of Rectangle : %.2f",area);
    return 0;
}
