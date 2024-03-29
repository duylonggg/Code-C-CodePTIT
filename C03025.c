#include <stdio.h>
#include <math.h>

int KiemTraSNT(int n){
	if(n < 2)
		return 0;
	if(n < 4)
		return 1;
	if(n % 2 == 0 || n % 3 == 0)
		return 0;
	
	int can = sqrt(n);
	for(int i = 5; i <= can; i += 6){
		if(n % i == 0 || n % (i + 2) == 0)
			return 0;	
	}
	return 1;
}

int KiemTraTong(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	return KiemTraSNT(tong);
}

int KiemTraChuSo(int n){
	while(n){
		int a;
		a = n % 10;
		n /= 10;
		if(KiemTraSNT(a) == 0)
			return 0;
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);

	while(T--){
		int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; ++i){
            if(KiemTraChuSo(i) == 1 && KiemTraTong(i) == 1 && KiemTraSNT(i) == 1)
                ++cnt;
        }
		printf("%d\n", cnt);
	}
	return 0;
}