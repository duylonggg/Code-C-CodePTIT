#include<stdio.h>

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

int sumOfDiv[2000005];

void sieve()
{
	sumOfDiv[1] = 0;
	for (int i = 2; i <= 2e6; ++i)
	{
		if (!sumOfDiv[i])
		{
			sumOfDiv[i] = i;
			for (long long j = 1LL * i * i; j <= 2e6; j += i)
				sumOfDiv[j] = i;
		}
	}
}

int main()
{
	sieve();
	int t;
	scanf("%d", &t);
	long long sum = 0;
	while (t--)
	{
		int n;
		scanf("%d", &n);
		while (n != 1)
		{
			sum += sumOfDiv[n];
			n /= sumOfDiv[n];
		}
	}
	printf("%lld\n", sum);
	return 0;
}