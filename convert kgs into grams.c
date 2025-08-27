#include <stdio.h>
int main() {
    float kg,grams;
    printf("Enter kg: ");
    scanf("%f", &kg);
    grams = kg*1000 ;
    printf("%.2f kg = %.2f grams\n", kg,grams);
    return 0;
}
