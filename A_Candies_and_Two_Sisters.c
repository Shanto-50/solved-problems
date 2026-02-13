#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    while (t--)
    {
        int count = 0;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            count = (n / 2) - 1;
        }
        else if (n <= 2)
            count = 0;
        else
        {
            count = n / 2;
        }
        printf("%d\n", count);
    }
    return 0;}
// the code below gives time limit exeeded
// #include <stdio.h> 
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     int n;
//     while (t--)
//     {
//         scanf("%d", &n);
//         int count = 0, i = 1;
//         while (i != 0)
//         {
//             int a = n - i;
//             if (a > i)
//                 count++;
//             else
//             {
//                 printf("%d\n", count);
//                 break;
//             }
//             i++;
//         }
//     }
//     return 0;
// }
