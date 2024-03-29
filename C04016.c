#include <stdio.h>

typedef struct {
    int element;
    int count;
} ElementCount;

int is_prime(int n) {
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

void swap(ElementCount *a, ElementCount *b) {
    ElementCount temp = *a;
    *a = *b;
    *b = temp;
}

int partition(ElementCount arr[], int low, int high) {
    int pivot = arr[high].element;
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j].element < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(ElementCount arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    int cnt = 1;
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        ElementCount elements[n];
        int uniqueCount = 0;
        for (int i = 0; i < n; ++i) {
            int j;
            for (j = 0; j < uniqueCount; ++j) {
                if (elements[j].element == arr[i]) {
                    elements[j].count++;
                    break;
                }
            }
            if (j == uniqueCount) {
                elements[uniqueCount].element = arr[i];
                elements[uniqueCount].count = 1;
                uniqueCount++;
            }
        }
        quickSort(elements, 0, uniqueCount - 1);

        printf("Test %d:\n", cnt++);
        for (int i = 0; i < uniqueCount; ++i) {
            if (is_prime(elements[i].element))
                printf("%d xuat hien %d lan\n", elements[i].element, elements[i].count);
        }
    }
    return 0;
}
