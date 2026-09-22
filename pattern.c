#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    // Upper half
    for (int i = 1; i <= mid; i++)
    {
        // Increasing numbers
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Spaces
        for (int j = 1; j <= 2 * (mid - i) - 1; j++)
        {
            printf(" ");
        }

        // Decreasing numbers
        if (i < mid)
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    // Lower half
    for (int i = n / 2; i >= 1; i--)
    {
        // Increasing numbers
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Spaces
        for (int j = 1; j <= 2 * (mid - i) - 1; j++)
        {
            printf(" ");
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}