#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count1++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            count2++;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (count1 > count2 || count1 == count2)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
        else if (count1 < count2)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}