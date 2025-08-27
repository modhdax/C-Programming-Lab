#include <stdio.h>
int main() {
    float F,C;
    printf("Enter C: ");
    scanf("%f", &C);
    F =(9.0/5)*C+32;
    printf("%.2f C = %.2f F\n",C,F);
    return 0;
}
