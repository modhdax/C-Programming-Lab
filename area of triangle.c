#include <stdio.h>

int main() {
float H,L,area;
printf("Enter height of triangle: ");
scanf("%f", &H);
printf("Enter length of triangle:");
scanf("%f",&L);
area = (H*L)/2;
printf("Area of triangle: %.2f\n", area);

return 0;
}
