#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a != b)
            count++;
    }
    printf("%d", count + 1);
    return 0;
}