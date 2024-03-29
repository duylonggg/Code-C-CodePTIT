#include <stdio.h>
#include <math.h>
int notPrime[10005] = {};

void sangSNT()
{
	int i, j;
	notPrime[0] = 1;
	notPrime[1] = 1;
	for(i = 2; i < 10005; ++i)
	{
		if(notPrime[i] == 0)
		{
			for(j = i * i; j < 10005; j += i)
			{
				notPrime[j] = 1; 
			}
		}
	}
}
int main()
{
	sangSNT();
	int prime[1229];
	int j = 0;
	for(int i = 0; i <= 9975; ++i)
	{
		if(notPrime[i] == 0)
			prime[j++] = i; 	
	}
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 0; i < 1229; ++i)
		{
			for(int j = i; j< 1229; ++j)
			{
				if(prime[i] + prime[j] == n)
					printf("%d %d ", prime[i], prime[j]);
			}
		}
		printf("\n");
	}
    return 0;
}