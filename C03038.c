//C03038
#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, p;
		scanf("%d%d", &n, &p);
		long long k = 1;
		int dem = 0;
		for(int i = p; i <= n; ++i)
		{
			k = i;
			while(k % p == 0)
			{
				dem++;
				k /= p;
			}
		}
		printf("%d\n", dem);
	}
}