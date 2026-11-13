#include <stdio.h>

int main()
{
    double bytes;
    printf("Enter bytes: ");
    scanf("%lf", &bytes);
    printf("KB = %.6f\n", bytes / 1024);
    printf("MB = %.9f\n", bytes / (1024 * 1024));
    printf("GB = %.12f\n", bytes / (1024 * 1024 * 1024));
    return 0;
}
