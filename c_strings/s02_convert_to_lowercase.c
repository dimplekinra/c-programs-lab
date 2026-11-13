#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("Lower case: %s\n", str);
    return 0;
}
