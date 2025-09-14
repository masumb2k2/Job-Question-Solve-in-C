#include<stdio.h>
int main(){
    int Four_digit,Two_digit;
    printf("Enter $ Digit Number : ");
    scanf("%d",&Four_digit);
    Two_digit=Four_digit%100;
    printf("Last Two Digit are : %d",Two_digit);
    return 0;

}
