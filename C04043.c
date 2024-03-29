#include <stdio.h>
#include <stdlib.h>

#define ll long long

void swap(ll* a, ll* b) {
    *a ^= *b ^= *a ^= *b;
}

ll partition(ll arr[], ll low, ll high) {
    ll pivot = arr[(low + high) / 2];
    ll i = low - 1;
    ll j = high + 1;
    while (1) {
        do i++; while (arr[i] < pivot);
        do j--; while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(&arr[i], &arr[j]);
    }
}

void quickSort(ll arr[], ll low, ll high) {
    if (low < high) {
        ll pivot = partition(arr, low, high);
        quickSort(arr, low, pivot);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        ll arr[n];
        for (int i = 0; i < n; ++i) {
            int x;
            scanf("%d", &x);
            arr[i] = 1ll * x * x;
        }
        quickSort(arr, 0, n - 1);
        
		int check = n - 1;
		int ok = 1;
		for(int i = n - 1; i >= 2; --i){
			int l = 0, r = n - 2;
			while(l < r){
				ll tong = arr[l] + arr[r];
				if(tong < arr[i]) ++l;
				else if(tong > arr[i]) --r;
				else{
					ok = 0;
					break;
				}
			}
			if(!ok) break;
		}
		if(ok)
			printf("NO\n");
		else 
			printf("YES\n");
    }
    return 0;
}
