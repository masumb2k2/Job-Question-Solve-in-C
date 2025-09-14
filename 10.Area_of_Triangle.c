#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter The Lenght of 3 arm :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle : %.2f",area);
    return 0;
}
