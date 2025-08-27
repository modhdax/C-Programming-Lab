#include <stdio.h>
int main() {
    float pound,dollars,rupees;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
     rupees = dollars * 48;
     pound = rupees /70 ;
    printf("%.2f dollars = %.2f pound\n",dollars,pound);
    return 0;
}
