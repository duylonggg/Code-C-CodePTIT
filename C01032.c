#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int demSNT = 0;
        int dem = 0, tich = 1;
        for(long long factor = 2; factor*factor <= n; ++factor){
            demSNT += (n % factor == 0);
            int dem = 0;
            while(n % factor == 0){
                if(dem == 0)
                    tich *= 1ll * factor;
                n /= factor;
                ++dem;
            }
        }
        if(demSNT != 0){
            if(n > 1)
                printf("%lld\n", tich * n);
            else
                printf("%lld\n", tich);
        }
        else    
            printf("%lld\n", n);
    }
	return 0;
}