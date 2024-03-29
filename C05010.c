#include <stdio.h>
int isPrime(int n)
{
	if(n <= 1)
		return 0;
	if(n <= 3)
		return 1;
	if(n % 2 == 0 || n % 3 == 0)
		return 0;
	for(int i = 5; i * i <= n; i += 6)
		if(n % i == 0 || n % (i + 2) == 0)
			return 0;
	return 1;	
}

int main()
{
	int n;
	scanf("%d", &n);
	long long a[n][n];
	long long sum = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = i; j < n; ++j)
		{
			if(isPrime(a[i][j]))
				sum += a[i][j];
		}
	}
	printf("%lld", sum);
    return 0;
}