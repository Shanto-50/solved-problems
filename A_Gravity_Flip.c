#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 0; j < n - 1 - k; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }
    return 0;
}