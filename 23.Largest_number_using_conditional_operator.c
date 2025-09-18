#include <stdio.h>
int main() {
    int a, b, c, big;
    printf("Enter 3 numbers here: ");
    scanf("%d%d%d", &a, &b, &c);

    // Using nested ternary operator
    big = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Largest Number is : %d\n", big);
    return 0;
}
