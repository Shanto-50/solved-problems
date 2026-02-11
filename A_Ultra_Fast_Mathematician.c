#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101], str3[101];

    scanf("%s", str1);
    scanf("%s", str2);
    int n = strlen(str1);

    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
            str3[i] = '1';
        else
            str3[i] = '0';
    }

    str3[n] = '\0';
    printf("%s\n", str3);

    return 0;
}