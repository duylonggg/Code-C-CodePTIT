#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int *x = (int *) a;
    int *y = (int *) b;
    return (*x - *y);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for(int i = 0; i < m; ++i) scanf("%d", &b[i]);

    // Sắp xếp các mảng
    qsort(a, n, sizeof(int), compare);
    qsort(b, m, sizeof(int), compare);

    // Tìm tập giao
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    printf("\n");

    // Tìm hiệu A - B
    i = 0;
    j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    while (i < n) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    // Tìm hiệu B - A
    i = 0;
    j = 0;
    while (i < n && j < m) {
        if (b[j] < a[i]) {
            printf("%d ", b[j]);
            j++;
        } else if (b[j] > a[i]) {
            i++;
        } else {
            i++;
            j++;
        }
    }
    while (j < m) {
        printf("%d ", b[j]);
        j++;
    }
    printf("\n");

    return 0;
}
