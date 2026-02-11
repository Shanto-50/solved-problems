#include <stdio.h>
#include <string.h>
int main()
{
    char str1[105], str2[105], str3[105];
    scanf("%s", str1);
    scanf("%s", str2);
    int i = strlen(str1) - 1, j = 0;
    int count = 0;
    while (i >= 0)
    {
        str3[j] = str1[i];
        i--;
        j++;
    }
    str3[j] = '\0';
    for (int k = 0; k < strlen(str1); k++)
    {
        if (str2[k] != str3[k])
        {
            count = 1;
            break;
        }
        else
            count = 0;
    }
    int a = strlen(str1);
    int b = strlen(str2);
    if (a == b && count == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}