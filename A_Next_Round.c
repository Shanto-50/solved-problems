#include <stdio.h>
int main()
{
    int n, k, y, count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    y = arr[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= y && y > 0)
            count++;
    }
    printf("%d", count);
    return 0;
}