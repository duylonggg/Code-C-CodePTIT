#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; --i){
		for(int j = 0; j <= i - 1; ++j)
			printf("%c", '@' + j - 1 + i);
		printf("\n");
	}
	return 0;
}