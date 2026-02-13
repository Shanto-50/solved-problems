#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[5];
        int count = 0;
        int position = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                arr[count] = digit * position;
                count++;
            }
            n = n / 10;
            position = position * 10;
        }
        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}