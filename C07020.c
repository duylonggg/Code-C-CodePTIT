#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define ll long long

typedef struct{
    int start;
    char name[100];
    int need;
    int stone;
    int numb;
} Pokemon;

void swap(Pokemon *a, Pokemon *b){
    Pokemon tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int cmp(Pokemon a, Pokemon b) {
    if (a.numb == b.numb) 
        return a.start > b.start;
    return a.numb > b.numb;
}

void bubble_sort(Pokemon a[], int n){
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(cmp(a[i], a[j]))
                swap(&a[i], &a[j]);
}

int main(){
    int n;
    scanf("%d\n", &n);
    Pokemon pokemon[n];
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        pokemon[i].numb = 0;
        pokemon[i].start = i + 1;
        fgets(pokemon[i].name, 100, stdin);
        pokemon[i].name[strcspn(pokemon[i].name, "\n")] = '\0';
        scanf("%d%d\n", &pokemon[i].need, &pokemon[i].stone);
        while(pokemon[i].stone >= pokemon[i].need){
            int evo = pokemon[i].stone / pokemon[i].need;
            pokemon[i].stone -= evo * (pokemon[i].need - 2);
            pokemon[i].numb += evo;
        }
        cnt += pokemon[i].numb;
    }
    
    bubble_sort(pokemon, n);

    printf("%d\n", cnt);
    
    int max = pokemon[n - 1].numb;
    for(int i = 0; i < n; ++i){
        if(pokemon[i].numb == max){
            puts(pokemon[i].name);
            break;
        }
    }

    // for(int i = 0; i < n; ++i){
    //     printf("%d %s %d\n", pokemon[i].start, pokemon[i].name, pokemon[i].numb);
    // }
    return 0;
}