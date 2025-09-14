#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter Two number: ");
    scanf("%d%d",&a,&b);
    sum=a-~b-1;
    printf("Sum is: %d",sum);
    return 0;
}
