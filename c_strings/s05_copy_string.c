#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;   /* remove the Enter at the end */
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
