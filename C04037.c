#include <stdio.h>

typedef struct {
    int element;
    int count;
} ElementCount;

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) 
        scanf("%d", &arr[i]);
    
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

    int cnt = 0;
    for (int i = 0; i < uniqueCount; ++i) {
        if((elements[i].count) > 1){
            ++cnt;
        }
    }
    printf("%d\n", cnt);
    
    for (int i = 0; i < uniqueCount; ++i) {
        if((elements[i].count) > 1){
            printf("%d ", elements[i].element);
        }
    }
    return 0;
}