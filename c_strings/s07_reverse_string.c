#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;   /* remove the Enter at the end */
    len = strlen(str);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
