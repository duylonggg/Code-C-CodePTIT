// C04004
#include <stdio.h>

int main()
{
	long long f[1005];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 1000; ++i)
	{
		f[i] = (f[i - 1] + f[i - 2]);
	}
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", f[n]);
	}
	return 0;
}