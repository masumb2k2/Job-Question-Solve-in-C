#include<stdio.h>
int main(){
    int n, angle;
    printf("Enter the Polygon side: ");
    scanf("%d",&n);
    angle=((n-2)*180)/n;
    printf("Angle is : %d", angle);
    return 0;
}
