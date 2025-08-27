#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;
printf("Enter marks of first subject: ");
scanf("%f", &sub1);
printf("Enter marks of second subject: ");
scanf("%f", &sub2);
printf("Enter marks of third subject: ");
scanf("%f", &sub3);
total = sub1 + sub2 + sub3;
average = total / 3;
printf("Total marks = %.2f\n", total);
printf("Average marks = %.2f\n", average);

    return 0;
}
