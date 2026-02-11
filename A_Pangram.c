#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int alphabet[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(str[i]);
        alphabet[ch - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}