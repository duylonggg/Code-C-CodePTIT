#include <stdio.h>
int min(int a, int b)
{
	if(a <= b) return a;
	return b;
}
int max(int a, int b)
{
	if(a >= b) return a;
	return b;
}
int den[1005] = {};
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	den[a + 1] = 1;
	den[0] = 1;
	int ans = 0;
	while(b--)
	{
		int x;
		scanf("%d", &x);
		for(int i = max(x - c, 1); i <= min(x + c, a); ++i)
			den[i] = 1;
	}
	for(int i = 0; i <= a + 1; ++i)
	{
		if(den[i] == 1)
			for(int j = i + 1; j <= a + 1; ++j)
			{
				if(den[j] == 1)
				{
					ans += (j - i - 1) / (2 * c + 1) + ((j - i - 1) % (2 * c + 1) != 0);
					break;
				}
			}
	}
//	for(int i = 1; i <= a + 1; ++i) printf("%d ", den[i]);
//	printf("\n");
	printf("%d", ans);
	return 0;
}