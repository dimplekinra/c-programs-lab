#include <stdio.h>

int main()
{
    float grams;
    printf("Enter grams: ");
    scanf("%f", &grams);
    printf("Kilograms = %.3f\n", grams / 1000);
    return 0;
}
