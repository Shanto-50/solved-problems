#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int l = 0; l < n - 1 - j; l++)
        {
            if (arr[l] < arr[l + 1])
            {
                int temp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = temp;
            }
        }
    }
    int x = sum / 2;
    int sum2 = 0, count = 0;
    for (int k = 0; k < n; k++)
    {
        sum2 = sum2 + arr[k];
        count++;
        if (sum2 > x)
        {
            printf("%d", count);
            return 0;
        }
    }
    return 0;
}