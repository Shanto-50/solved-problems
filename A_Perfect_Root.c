#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    while (t > 0)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        t--;
    }
    return 0;
}