#include <stdio.h>
int main() {
    int a, b, Product;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    Product = a * b;

    printf("Multiplication of %d and %d is: %d", a, b, Product);

    return 0;
}
