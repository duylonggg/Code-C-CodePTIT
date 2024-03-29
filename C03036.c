#include<stdio.h>
#include<math.h>
int ktraTongLe(long long n)
{
	int dem = 0;
	while(n)
	{
		dem += n % 10;
		n /= 10;
	}
	return dem % 2 == 1;
}
int kiemTraThuanNghich(long long a)
{
    long long b = a;
    long long soMoi = 0;
    while(a) {
        soMoi = soMoi * 10 + a % 10;
        a /= 10;
    }
    return soMoi == b;
}
int checkTungSoLe(long long a)
{
	int dem = 0;
	int h;
	while(a)
	{
		h = a % 10;
		if(h % 2 == 0) return 0;
		a /= 10;
	}
	return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	while(a--)
	{
		long long b;
		scanf("%lld", &b);
		if(ktraTongLe(b) && kiemTraThuanNghich(b) && checkTungSoLe(b))
			printf("YES\n");
		else printf("NO\n");

	}
}