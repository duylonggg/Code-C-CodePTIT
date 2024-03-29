#include <stdio.h>
#include <string.h>

struct Student{
    int msv;
    char name[100];
    float a, b, c;
    float sum;
};

struct Student stu[100];

void add(int n){
    int cnt = 1;
    while (cnt <= n)
    {
        stu[cnt].msv = cnt;
        scanf("\n");
        gets(stu[cnt].name);
        scanf("%f%f%f", &stu[cnt].a, &stu[cnt].b, &stu[cnt].c);
        stu[cnt].sum = stu[cnt].a + stu[cnt].b + stu[cnt].c;
        ++cnt;
    }
}

void change(int cnt){
    scanf("\n");
    gets(stu[cnt].name);
    scanf("%f%f%f", &stu[cnt].a, &stu[cnt].b, &stu[cnt].c);
}

void show(int i){
    printf("%d %s %.1f %.1f %.1f\n", stu[i].msv, stu[i].name, stu[i].a, stu[i].b, stu[i].c);
}

void check(int n){
    for (int i = 1; i <= n; i++)
        if (stu[i].a < stu[i].b && stu[i].b < stu[i].c)
            show(i);
}

int main(){
    int n;
    while (1){
        int x = 0;
        scanf("%d", &x);
        if (x == 1){
            scanf("%d\n", &n);
            add(n);
            printf("%d\n", n);
        }
        else if (x == 2){
            int m;
            scanf("%d", &m);
            change(m);
            printf("%d\n", m);
        }
        else{
            check(n);
            break;
        }
    }
    return 0;
}