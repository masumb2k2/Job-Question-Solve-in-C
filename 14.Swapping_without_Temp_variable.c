#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter Two Number: ");
    scanf("%d%d",&num1,&num2);
    num1=num2+num1;
    num2=num1-num2;
    num1=num1-num2;
    printf("First number now: %d\n",num1);
    printf("second number now: %d",num2);

}
