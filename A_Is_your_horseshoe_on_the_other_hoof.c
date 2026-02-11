#include <stdio.h>

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int unique = 0;

    for (int j = 0; j < 4; j++)
    {
        int same = 0;
        for (int k = 0; k < j; k++)
        {
            if (arr[j] == arr[k])
            {
                same = 1;
                break;
            }
        }
        if (same == 0)
            unique++;
    }

    printf("%d", 4 - unique);
    return 0;
}
