#include <stdio.h>

int main()
{
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    discount = gross * 10 / 100;
    net = gross - discount;
    printf("Discount = %.2f\n", discount);
    printf("Net sales = %.2f\n", net);
    return 0;
}
