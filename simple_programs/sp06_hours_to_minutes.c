#include <stdio.h>

int main()
{
    float hours;
    printf("Enter hours: ");
    scanf("%f", &hours);
    printf("Minutes = %.2f\n", hours * 60);
    return 0;
}
