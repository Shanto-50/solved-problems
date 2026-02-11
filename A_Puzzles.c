#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < m - j - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    int mindiff = arr[m - 1] - arr[0];
    for (int i = 0; i + n - 1 < m; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        if (diff < mindiff)
            mindiff = diff;
    }
    printf("%d", mindiff);
    return 0;
}