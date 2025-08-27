#include <stdio.h>
int main() {
    float bytes,KB,MB,GB;
    printf("Enter bytes: ");
    scanf("%f", &bytes);
    KB = bytes/1024;
    printf("%.2f bytes = %.2f KB\n",bytes,KB);
    MB =bytes /1024 *1024;
    printf("%.2f bytes = %.2f MB\n",bytes,MB);
    GB = bytes /1024 * 1024 *1024;
    printf("%.2f bytes =%.2f GB\n",bytes,GB);
    return 0;
}
