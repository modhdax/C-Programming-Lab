#include <stdio.h>

int main() {
    float L, B, area, perimeter;


    printf("Enter length of rectangle: ");
    scanf("%f", &L);
    printf("Enter width of rectangle: ");
    scanf("%f", &B);


    area = L * B;
    perimeter = 2 * (L + B);


    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}
