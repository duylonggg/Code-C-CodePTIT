#include <stdio.h>

int main(){
	long long n;
	long long x = n;
	int demSNT = 0;
	scanf("%lld", &n);
    int dem = 0;
	for(long long factor = 2; factor*factor <= n; ++factor){
		demSNT += (n % factor == 0);
		while(n % factor == 0){
            if(dem == 0)
                printf("%d", factor);
            else
                printf("x%d", factor);
			n /= factor;
            ++dem;
		}
	}

	if(n > 1)
		printf("x%lld", n);

	return 0;
}