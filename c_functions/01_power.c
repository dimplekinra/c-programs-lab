#include <stdio.h>

void main()
{
    int a, b, i, p = 1;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        p = p * a;
    }
    printf("%d raised to %d = %d\n", a, b, p);
}
