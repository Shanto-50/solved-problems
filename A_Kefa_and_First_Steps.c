#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    int current = 1, ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            current++;
        else
            current = 1;
        if (current > ans)
            ans = current;
    }
    printf("%d", ans);
    return 0;
}