#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        int demSNT = 0;
        scanf("%lld", &n);
        printf("%d = ", n);

        for(long long factor = 2; factor*factor <= n; ++factor){
            int dem = 0;
            demSNT += (n % factor == 0);
            while(n % factor == 0){
                ++dem;
                n /= factor;

            }
            if(dem > 0){
                if(demSNT == 1)
                    printf("%lld^%d", factor, dem);
                else
                    printf(" * %lld^%d", factor, dem);
            }
        }

        if(n > 1){
            if(demSNT == 0)
                printf("%lld^1", n);
            else
                printf(" * %lld^1", n);
        }
        printf("\n");
    }
	return 0;
}