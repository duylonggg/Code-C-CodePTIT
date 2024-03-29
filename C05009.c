#include <stdio.h>
#define endl printf("\n")

int add(int array[100][100], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &array[i][j]);
}

void swap(int array[100][100], int n)
{
    int temp;
    for (int i = 0; i < n; ++i)
    {
        temp = array[i][i];
        array[i][i] = array[i][n - i - 1];
        array[i][n - i - 1] = temp;
    }
}

int out(int array[100][100], int n)
{
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            printf("%d ", array[i][j]);
        endl;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[100][100];
    add(array, n);
    swap(array, n);
    out(array, n);
    return 0;
}