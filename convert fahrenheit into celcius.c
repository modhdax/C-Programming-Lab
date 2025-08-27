#include <stdio.h>
int main() {
    float F,C;
    printf("Enter F: ");
    scanf("%f", &F);
    C =(5.0/9)*(F - 32);
    printf("%.2f F = %.2f C\n",F,C);
    return 0;
}
