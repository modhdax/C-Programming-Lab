#include <stdio.h>
int main() {
    int minutes;
    int hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    printf("%d minutes = %d hours\n", minutes, hours);
    return 0;
}
