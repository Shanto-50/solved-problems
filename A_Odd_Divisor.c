#include <stdio.h>

int main()
{
    long long t, n;
    scanf("%lld", &t);

    while (t--)
    {
        scanf("%lld", &n);

        while (n % 2 == 0)
        {
            n /= 2;
        }

        if (n > 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
