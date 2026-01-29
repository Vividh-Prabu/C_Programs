//
// Created by Vividh Prabu on 18/01/26.
//
#include <stdio.h>

int main() {
    int T, N;
    printf("TeseCase:");
    scanf("%d", &T);

    while (T--)
    {
        printf("N:");
        scanf("%d", &N);
        int a[N];

        for (int i = 0; i < N; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < N; i++)
        {
            int dup = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    dup = 1;
                    break;
                }
            }
            if (!dup)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
