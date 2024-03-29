#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    char birth[100];
    float mark1, mark2, mark3;
    float total;
} Student;

void swap(Student *a, Student *b) {
    Student tmp = *a;
    *a = *b;
    *b = tmp;
}

int cmp(Student a, Student b) {
    if (a.total == b.total)
        return a.id < b.id;
    return a.total > b.total;
}

void bubble_sort(Student a[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (!cmp(a[j], a[j + 1]))
                swap(&a[j], &a[j + 1]);
}

int main() {
    int n;
    scanf("%d\n", &n);
    Student stu[n];
    
    for (int i = 0; i < n; ++i) {
        stu[i].id = i + 1;
        gets(stu[i].name);
        gets(stu[i].birth);
        scanf("%f%f%f\n", &stu[i].mark1, &stu[i].mark2, &stu[i].mark3);
        stu[i].total = stu[i].mark1 + stu[i].mark2 + stu[i].mark3;
    }
    bubble_sort(stu, n);
    for (int i = 0; i < n; ++i)
        printf("%d %s %s %.1f\n", stu[i].id, stu[i].name, stu[i].birth, stu[i].total);
    return 0;
}
