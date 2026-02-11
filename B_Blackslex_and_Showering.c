#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int z = arr[i] - arr[i + 1];
        if (z < 0)
            z = z * (-1);
        sum = sum + z;
    }

    return 0;
}