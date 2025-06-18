#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        if (k > 1)
        {
            printf("yes\n");
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (A[i] <= A[i + 1])
                {
                    count++;
                }
            }
            if (count == n - 1)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}