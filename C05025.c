#include<stdio.h>

void Swap(int *a, int *b){
	*a ^= *b ^= *a ^= *b;
}

int main(){
	int t;
	scanf("%d", &t);
	for (int z = 1; z <= t; ++z){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[105][105];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				scanf("%d", &a[i][j]);
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				for (int x = i; x < n; ++x)
					for (int y = j; y < m; ++y)
						if (a[i][j] > a[x][y])
							Swap(&a[i][j], &a[x][y]);
		printf("Test %d:\n", z);
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
