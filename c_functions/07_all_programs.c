#include <stdio.h>

void main()
{
    int ch;
    printf("1. Power\n2. Leap year\n3. Factorial\n4. Swap\n5. Max and Min\n6. Calculator\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        int a, b, i, p = 1;
        printf("Enter a and b: ");
        scanf("%d %d", &a, &b);
        for (i = 1; i <= b; i++)
        {
            p = p * a;
        }
        printf("%d raised to %d = %d\n", a, b, p);
    }
    else if (ch == 2)
    {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);
    }
    else if (ch == 3)
    {
        int n, i, f = 1;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("Factorial of %d = %d\n", n, f);
    }
    else if (ch == 4)
    {
        int a, b, temp;
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        printf("Before swap: a = %d, b = %d\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("After swap: a = %d, b = %d\n", a, b);
    }
    else if (ch == 5)
    {
        int a[50], n, i, max, min;
        printf("Enter number of elements: ");
        scanf("%d", &n);
        printf("Enter the elements: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        max = a[0];
        min = a[0];
        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
        }
        printf("Maximum = %d\n", max);
        printf("Minimum = %d\n", min);
    }
    else if (ch == 6)
    {
        float a, b;
        char op;
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter operator (+ - * /): ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%f", &b);
        if (op == '+')
            printf("Result = %.2f\n", a + b);
        else if (op == '-')
            printf("Result = %.2f\n", a - b);
        else if (op == '*')
            printf("Result = %.2f\n", a * b);
        else if (op == '/')
            printf("Result = %.2f\n", a / b);
        else
            printf("Invalid operator\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}
