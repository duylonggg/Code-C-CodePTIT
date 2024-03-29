#include <stdio.h>
#include <string.h>
#define endl printf("\n")
 
void reverse(int a[], int n)
{
    int tmp;
    int l = 0;
    int r = n - 1;
    while(l < r){
        tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l;
        --r;
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

    reverse(x, lenA);
    reverse(y, lenB);
    for (int i = lenB; i < lenA; ++i)
        y[i] = 0;
 
    int count[lenA + 1];
    int idx = 0;
    for (int i = 0; i < lenA; ++i)
    {
        count[i] = (x[i] + y[i] + idx) % 10;
        idx = (x[i] + y[i] + idx) / 10;
    }
    if (idx)
    {
        count[lenA] = idx;
        for (int i = lenA; i >= 0; --i)
            printf("%d", count[i]);
    }
    else
    {
        for (int i = lenA - 1; i >= 0; --i)
            printf("%d", count[i]);
    }
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