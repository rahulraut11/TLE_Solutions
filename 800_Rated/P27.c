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

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int mult[n];
        int count_two = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == 2)
            {
                count_two++;
            }
        }
        int target = 0;
        int count = 0;
        if (count_two % 2 == 1)
        {
            printf("-1\n");
        }
        else if (count_two == 0)
        {
            printf("1\n");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                count++;
                if (a[i] == 2)
                {
                    target++;
                }
                if (target == count_two / 2)
                {
                    break;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}