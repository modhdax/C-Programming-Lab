#include <stdio.h>
int main() {
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    discount = gross * 0.10;
    net = gross - discount;
    printf("Net Sales = %.2f\n", net);
    return 0;
}
