#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for (int k = 0; k < m; k++)
    {
        if (arr[k] <= 0)
            sum = sum + arr[k];
    }
    if (sum < 0)
        sum = sum * -1;
    printf("%d", sum);
    return 0;
}