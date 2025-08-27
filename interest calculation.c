#include <stdio.h>
int main() {
    float interest,P,R,N;
    printf("Enter P: ");
    scanf("%f", &P);
    printf("Enter R :");
    scanf("%f",&R);
    printf("Enter N :");
    scanf("%f",&N);
    interest = (P*R*N)/100;
    printf("%.2f (P*R*N)= %.2f interest",P,R,N,interest);
    return 0;
}
