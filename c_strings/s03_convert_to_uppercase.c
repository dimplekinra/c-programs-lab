#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;   /* remove the Enter at the end */
    for (i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
    printf("Upper case: %s\n", str);
    return 0;
}
