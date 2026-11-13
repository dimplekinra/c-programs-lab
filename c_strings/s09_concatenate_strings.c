#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100];
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;   /* remove the Enter at the end */
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;   /* remove the Enter at the end */
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
