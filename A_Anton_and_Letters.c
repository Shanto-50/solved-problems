#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    fgets(str, sizeof(str), stdin);
    int freq[26] = {0};
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            if (freq[index] == 0)
            {
                freq[index] = 1;
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}