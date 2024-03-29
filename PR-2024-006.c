#include <stdio.h>

void input(int n, int a[]) {
    for (int i = 0; i < n; ++i)
        scanf("%d", a + i);
}

void output(int n, int a[]) {
    for (int i = 0; i < n; ++i)
        printf("%d ", *(a + i));
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) 
        for (int j = i + 1; j < n; ++j) 
            if (arr[j] < arr[i]) 
                arr[j] ^= arr[i] ^= arr[j] ^= arr[i];
}

void rBubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) 
        for (int j = i + 1; j < n; ++j) 
            if (arr[j] > arr[i]) 
                arr[j] ^= arr[i] ^= arr[j] ^= arr[i];
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        char c;
        scanf("%d%d %c", &m, &n, &c);
        int a[m], b[n], join[m + n];
        input(m, a);
        input(n, b);
        switch (c) {
            case 'F':
                output(m, a);
                output(n, b);
                break;
            case 'A':
                output(n, b);
                output(m, a);
                break;
            case 'T':
                for (int i = 0; i < m; ++i)
                    join[i] = a[i];
                for (int i = 0; i < n; ++i)
                    join[m + i] = b[i];
                bubbleSort(join, m + n);
                output(m + n, join);
                break;
            case 'G':
                for (int i = 0; i < m; ++i)
                    join[i] = a[i];
                for (int i = 0; i < n; ++i)
                    join[m + i] = b[i];
                rBubbleSort(join, m + n);
                output(m + n, join);
                break;
        }
        printf("\n");
    }
    return 0;
}