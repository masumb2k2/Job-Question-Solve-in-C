#include<stdio.h>
int main(){
    int a,b,sub;
    printf("Enter Two number: ");
    scanf("%d%d",&a,&b);
    sub=a+~b+1;
    printf("Sub is: %d",sub);
    return 0;
}
