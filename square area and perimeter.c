#include <stdio.h>
int main() {
    float area,perimeter,L;
    printf("Enter L: ");
    scanf("%f", &L);
    area = L*L ;
    printf("%.2f L*L= %.2f area\n",L,area);
    perimeter = 4*L ;
    printf("%.2f 4*L = %.2f perimeter\n",L,perimeter);
    return 0;
}
