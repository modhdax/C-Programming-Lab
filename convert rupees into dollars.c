#include <stdio.h>
int main() {
    float rupees,dollars;
    printf("Enter rupees: ");
    scanf("%f", &rupees);
dollars = rupees/48 ;
    printf("%.2f rupees = %.2f dollars\n", rupees,dollars);
    return 0;
}
