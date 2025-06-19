#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdint.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int mx = a[0];
        int d[n];
        for (int i = 1; i < n; i++)
        {
            d[i] = a[i] - a[i - 1];
            mx = MAX(mx, d[i]);
        }
        mx = MAX(mx, (2 * (x - a[n - 1])));
        printf("%d\n", mx);
    }
    return 0;
}