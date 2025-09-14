#include<stdio.h>
int main(){
    int x,y,*a,*b,temp;
    printf("Enter Two number: ");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("First Numer After Swap: %d\n",x);
    printf("Second Number After Swap: %d",y);
    return 0;
}
