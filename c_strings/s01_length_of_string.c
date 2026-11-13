#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;   /* remove the Enter at the end */
    len = strlen(str);
    printf("Length of the string = %d\n", len);
    return 0;
}
