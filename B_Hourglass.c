#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        long long r = c % b;
        long long ans = a - r;
        if (a < 0)
            printf("0\n");
        else
            printf("%lld\n", ans);
        t--;
    }
    return 0;
}