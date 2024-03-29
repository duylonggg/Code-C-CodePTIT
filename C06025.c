#include <stdio.h>
#include <string.h>
#define endl printf("\n")

void reverse(int a[], int n)
{
    int tmp;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l;
        --r;
    }
}

void diff(int count[], int x[], int y[])
{
    int idx;
    for (int i = 0; i < 1005; ++i)
    {
        if (x[i] >= y[i])
        {
            count[i] = x[i] - y[i];
            idx = 0;
        }
        else
        {
            count[i] = 10 + x[i] - y[i];
            idx = 1;
        }
        y[i + 1] += idx;
    }
}

void sum(char a[1005], char b[1005])
{
    int lenA = strlen(a);
    int lenB = strlen(b);
    int x[1005], y[1005];
    for (int i = 0; i < lenA; ++i)
        x[i] = a[i] - '0';
    for (int i = 0; i < lenB; ++i)
        y[i] = b[i] - '0';

    int negative;
    for (int i = 0; i < lenA; ++i)
    {
        if (x[i] < y[i])
        {
            negative = -1;
            break;
        }
        else if (x[i] >= y[i])
        {
            negative = 1;
            break;
        }
    }

    reverse(x, lenA);
    reverse(y, lenB);
    for (int i = lenB; i < lenA; ++i)
        y[i] = 0;

    int count[1005];
    int idx;
    if (lenA > lenB)
        diff(count, x, y);
    else
    {
        if (negative == 1)
            diff(count, x, y);
        else
            diff(count, y, x);
    }

    int tmp = 0;
    for (int i = lenA - 1; i >= 0; --i)
    {
        if (count[i] == 0)
            ++tmp;
        else
            break;
    }
    if (tmp == lenA)
        printf("0");
    for (int i = lenA - 1 - tmp; i >= 0; --i)
        printf("%d", count[i]);
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char a[1005];
        char b[1005];
        gets(a);
        gets(b);
        if (strlen(a) > strlen(b))
            sum(a, b);
        else
            sum(b, a);
        endl;
    }
}