#include <stdio.h>
int main()
{
    long long n, k;
    scanf("%lld%lld", &n, &k);
    long long oddcount = (n + 1) / 2, ans;
    if (k <= oddcount)
        ans = 2 * k - 1;
    else
        ans = 2 * (k - oddcount);
    printf("%lld", ans);
    return 0;
}