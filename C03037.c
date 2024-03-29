// C03037
#include <stdio.h>
#include <math.h>

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
	long long n;
	scanf("%lld", &n);
	int f[18];
	int prime[18] = {}; 
	int i = 0;
	while(n)
	{
		f[i] = n % 10;
		if(isPrime(f[i]))	
		{
			++prime[f[i]];
		}
		n = n / 10;
		++i;
	}
	int cnt = i;
	for(i = cnt; i >= 0; --i)
	{
		if(prime[f[i]] > 0)
		{
			printf("%d %d\n", f[i], prime[f[i]]);
			prime[f[i]] = 0;
		}
	}
    return 0;
}