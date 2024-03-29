#include <stdio.h>
#include <math.h>

#define ll long long

int cnt;

typedef struct {
    int a, b, c;
    float square;
} Triangle;

float count(int a, int b, int c) {
    float p = (a + b + c) / 2.0;
    return fabs(p * (p - a) * (p - b) * (p - c)) / 2.0;
}

void sort(Triangle a[], int cnt) {
    Triangle tmp;
    for (int i = 0; i < cnt - 1; ++i) {
        for (int j = 0; j < cnt - i - 1; ++j) {
            if (a[j].square > a[j + 1].square) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    Triangle tri[1000005];
    while (t--) {
        scanf("%d %d %d", &tri[cnt].a, &tri[cnt].b, &tri[cnt].c);
        tri[cnt].square = count(tri[cnt].a, tri[cnt].b, tri[cnt].c);
        ++cnt;
    }
    sort(tri, cnt);
    for (int i = 0; i < cnt; ++i)
        printf("%d %d %d\n", tri[i].a, tri[i].b, tri[i].c);
    return 0;
}
