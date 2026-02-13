#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a, b, c;
    while (t--)
    {
        scanf("%d%d%d", &a, &b, &c);
        if ((a + b) == c || (b + c) == a || (a + c) == b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}