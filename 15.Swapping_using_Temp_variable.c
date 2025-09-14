#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter Two Number: ");
    scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("First Numer after Swap: %d\n",num1);
    printf("Second Numer after Swap: %d",num2);
    return 0;
}
