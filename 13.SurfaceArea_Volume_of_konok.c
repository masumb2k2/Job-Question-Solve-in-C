#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main(){
    float radious,height,surface_area, volume;
    printf("Enter Radious and Height: ");
    scanf("%f%f", &radious,&height);
    surface_area=3.1416*radious*(radious+sqrt((radious*radious)+(height*height)));
      printf("Surface Area is : %.2f\n",surface_area);
    volume=(1/3)*3.1416*(radious*radious)*height;

    printf("Volume is : %.2f",volume);
    return 0;
}
