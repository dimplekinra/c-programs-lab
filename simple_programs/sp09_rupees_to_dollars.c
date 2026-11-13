#include <stdio.h>

int main()
{
    float rupees;
    printf("Enter rupees: ");
    scanf("%f", &rupees);
    printf("Dollars = %.2f\n", rupees / 48);
    return 0;
}
