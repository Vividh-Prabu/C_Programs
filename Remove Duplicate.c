#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", a[i]);
    }

    return 0;
}
