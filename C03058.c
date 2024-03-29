#include<stdio.h>
long long ucln(long long a, long long b)
{
	if (b == 0)
		return a;
	return ucln(b, a % b);
}

long long bcnn(long long a, long long b)
{
	return (a * b) / ucln(a, b);
}

int main()
{
	int a;
	scanf("%d", &a);
	while (a--)
	{
		int b;
		scanf("%d", &b);
		long long k = 1;
		for (int i = 1; i <= b; ++i)
			k =  bcnn(k, i);
		printf("%lld\n", k);
	}
	return 0;
}