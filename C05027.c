#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i =0; i < n; ++i)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	int mina = a[0];
	int minb = b[0];
	for(int i = 1; i <n; ++i)
	{
		if(mina > a[i])
			mina = a[i];
		if(minb > b[i])
			minb = b[i];
	}
	printf("%lld", 1ll * mina * minb);
    return 0;
}