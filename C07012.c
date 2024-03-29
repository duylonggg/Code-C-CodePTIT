#include <stdio.h>
#include <math.h>

#define ll long long

typedef struct {
    int id;
    char name[100];
    char group[100];
    double buy;
    double sell;
    double profit;
} Product;

void swap(Product *a, Product *b){
    Product tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(Product a[], int n){
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(a[i].profit < a[j].profit)
                swap(&a[i], &a[j]);
}

int main(){
    int n;
    scanf("%d\n", &n);
    Product product[n];
    for(int i = 0; i < n; ++i){
        product[i].id = i + 1;
        gets(product[i].name);
        gets(product[i].group);
        scanf("%lf%lf\n", &product[i].buy, &product[i].sell);
        product[i].profit = product[i].sell - product[i].buy;
    }
    bubble_sort(product, n);
    for(int i = 0; i < n; ++i)
        printf("%d %s %s %.2lf\n", product[i].id, product[i].name, product[i].group, product[i].profit);
    return 0;
}
