#include <stdio.h>
#include <math.h>
int checkThuanNghich(long long a, int cnt)
{
	long long check = pow(10, cnt - 1);
	a = a % check;
	a /= 10;
	long long b = a;
	long long soMoi = 0;
	while(a)
	{
		soMoi += (1ll * a % 10) * pow(10, (int)log10(a));
		a /= 10;
	}
	return soMoi == b;
}

int checkDauCuoi(long long a, int cnt)
{
	int c = a % 10;
	int d = a / pow(10, cnt - 1);
	if(c == d * 2 || d == c * 2)
		return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long a;
		scanf("%lld", &a);
		long long b = a;
		int cnt = 0;
		while(b)
		{
			b /= 10;
			++cnt;
		}
		if(checkDauCuoi(a, cnt) && checkThuanNghich(a, cnt))
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}