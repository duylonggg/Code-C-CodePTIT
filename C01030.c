#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, cnt_prime = 0;
        scanf("%d", &n);
    
        for(int factor = 2; factor * factor <= n; ++factor){
            while(n % factor == 0){
                printf("%d ", factor);
                n /= factor;
            }
        }
        if(n > 1) printf("%d ", n);
        printf("\n");
    }
	return 0;
}