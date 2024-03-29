#include <stdio.h>
#include <string.h>

typedef struct{
    int msv;
    char name[100];
    float a, b, c;
} Student;

Student stu[100];
char s[100];

void add(int n){
    int d = 1;
    while (d <= n){
        stu[d].msv = d;
        char s[100] = "";
        scanf("\n");
        gets(stu[d].name);
        scanf("%f%f%f", &stu[d].a, &stu[d].b, &stu[d].c);
        d++;
    }
}

void change(int d){
    scanf("\n");
    gets(stu[d].name);
    scanf("%f%f%f", &stu[d].a, &stu[d].b, &stu[d].c);
}

void show(int d){
    for (int i = d; i >= 1; i--){
        printf("%d ", stu[i].msv);
        printf("%s ", stu[i].name);
        printf("%.1f %.1f %.1f\n", stu[i].a, stu[i].b, stu[i].c);
    }
}

int main(){
    int n;
    while (1){
        int x;
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
            show(n);
            return 0;
        }
    }
}