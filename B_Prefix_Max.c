#include <stdio.h>

long long value(int arr[], int n)
{
    long long sum = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        sum = sum + max;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        long long ans = value(arr, n);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                long long cur = value(arr, n);
                if (cur > ans)
                    ans = cur;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        printf("%lld\n", ans);
        t--;
    }

    return 0;
}
