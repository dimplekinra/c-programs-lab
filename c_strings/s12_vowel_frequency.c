#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;   /* remove the Enter at the end */
    for (i = 0; i < strlen(str); i++)
    {
        switch (tolower(str[i]))
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': in++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\n", a, e, in, o, u);
    return 0;
}
