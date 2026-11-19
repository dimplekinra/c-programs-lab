#include <stdio.h>

void main()
{
    int n, temp, digit, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", rev);
    if (n == rev)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
}
