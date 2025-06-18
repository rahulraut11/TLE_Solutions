#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdint.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

bool isEven(int x)
{
    return (x & 1) == 0;
}

bool powerof2(int x)
{
    return x && !(x & (x - 1));
}

bool isKBitSet(int x, int k)
{
    return x & (1 << k); // 1<<k = 2^k or left shift 1 by k steps(in binary)
}

int toggleKBit(int x, int k)
{
    return x ^ (1 << k);
}
int setKBit(int x, int k)
{
    return x | (1 << k);
}
int unsetKBit(int x, int k)
{
    return x & ~(1 << k);
}
int insertBit(int x, int bit)
{
    return ((x << 1) | bit);
}
int multBy2PowerK(int x, int k)
{
    return x << k;
}
int divBy2PowerK(int x, int k)
{
    return x >> k;
}
int mod2PowerK(int x, int k)
{
    return x & ((1 << k) - 1);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
int toggleAB(int x, int a, int b)
{
    return a ^ b ^ x;
}
int popcount(int x)
{
    return __builtin_popcount(x);
}

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int count_unique(int arr[], int n)
{
    qsort(arr, n, sizeof(int), cmp);

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            count++;
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        int unique = count_unique(A, n);
        if (unique == 1)
        {
            printf("Yes\n");
        }
        else if (unique > 2)
        {
            printf("No\n");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] != A[0])
                {
                    int x = A[i];
                }
            }
            int count1 = 0;
            int count2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (A[i] == A[0])
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
            if (abs(count1 - count2) == 1 && n % 2 == 1)
            {
                printf("yes\n");
            }
            else if (count1 - count2 == 0 && n % 2 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}