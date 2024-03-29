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
	int a[n][n];
	int cnt1 = 0;
	int check = 0;
	for(int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for(int j = 0; j < n; ++j)
		{
			scanf("%d", &a[i][j]);
			if(isPrime(a[i][j]))
				++cnt;
		}
		if(cnt > cnt1)
		{
			cnt1 = cnt;
			check = i;
		}
	}
	printf("%d\n", check + 1);
	for(int i = 0; i < n; ++i)
	{
		if(isPrime(a[check][i]))
			printf("%d ", a[check][i]);
	}
    return 0;
}