#include <stdio.h>
int main() {
    float r, area;
    printf("Enter circle radius: ");
    scanf("%f", &r);

    area = 3.1416 * r * r;

    printf("area of the circle is: %f", area);

    return 0;
}
