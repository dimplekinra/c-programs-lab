#include <stdio.h>

void main()
{
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i=i+2)
        sum = sum + i;
    printf("Sum = %d\n", sum);
}
