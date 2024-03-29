// C03046
#include <stdio.h>
#include <math.h>
int checkThuanNghich(int a)
{
	int b = a;
	int soMoi = 0;
	while(a)
	{
		soMoi += (a % 10) * pow(10, (int) log10(a));
		a /= 10;
	}
	return soMoi == b;
}

int checkTong(int a)
{
	int tong = 0;
	while(a)
	{
		tong += a % 10;
		a /= 10; 
	}
	tong %= 10;
	return tong == 0; 
}

int check4(int a)
{
	while(a)
	{
		if(a % 10 == 4)
			return 0;
		a /= 10;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i = pow(10, n - 1); i < pow(10, n); ++i)
		{
			if(checkTong(i) && check4(i) && checkThuanNghich(i))
				printf("%d ", i);
		}
		printf("\n");
	}
    return 0;
}