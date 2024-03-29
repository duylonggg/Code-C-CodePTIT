#include <stdio.h>

typedef struct {
    int numb;
    int cnt;
} Number;

int check(int n) {
    int tmp = n % 10;
    n /= 10;
    while(n){
        if(n % 10 > tmp)
            return 0;
        tmp = n % 10;
        n /= 10;
    }
    return 1;
}

int is_appear(Number num[], int cnt, int n) {
    for(int i = 0; i < cnt; ++i)
        if(num[i].numb == n)
            return i;
    return -1;
}

void swap(Number* a, Number* b){
    Number tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(Number num[], int cnt){
    for(int i = 0; i < cnt - 1; ++i)
        for(int j = i + 1; j < cnt; ++j)
            if(num[i].cnt < num[j].cnt)
                swap(num + i, num + j);
}

int main() {
    int n;
    Number number[1000]; 
    int res = 0;
    while(scanf("%d", &n) == 1) {
        if(check(n)) {
            int tmp = is_appear(number, res, n);
            if(tmp != -1)
                ++number[tmp].cnt;
            else {
                number[res].numb = n;
                number[res++].cnt = 1;
            }
        }
    }
    bubble_sort(number, res);
    for(int i = 0; i < res; ++i)
        printf("%d %d\n", number[i].numb, number[i].cnt);
    return 0;
}
