#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("%d is the Largest",a);
    }
    else
    {
        printf("%d is the Largest",b);
    }

    return 0;
}
