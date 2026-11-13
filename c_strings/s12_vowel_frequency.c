#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
            a++;
        else if (str[i] == 'e' || str[i] == 'E')
            e++;
        else if (str[i] == 'i' || str[i] == 'I')
            in++;
        else if (str[i] == 'o' || str[i] == 'O')
            o++;
        else if (str[i] == 'u' || str[i] == 'U')
            u++;
    }
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\n", a, e, in, o, u);
    return 0;
}
