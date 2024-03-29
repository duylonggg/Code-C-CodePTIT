#include <stdio.h>

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
		}
		int cnt = 1;
		int max = a[0];
		for(int i = 1; i < n; ++i)
		{
			if(a[i] >= max)
			{
				++cnt;
				max = a[i];
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}