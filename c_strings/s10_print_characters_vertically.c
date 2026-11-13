#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;   /* remove the Enter at the end */
    for (i = 0; i < strlen(str); i++)
        printf("%c\n", str[i]);
    return 0;
}
