#include <stdio.h>

int main()
{
    float minutes;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    printf("Hours = %.2f\n", minutes / 60);
    return 0;
}
