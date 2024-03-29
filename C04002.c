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
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
			if(isPrime(a[i]))
				printf("%d ", a[i]);
		}
		printf("\n");
	}
    return 0;
}