#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long a;
		scanf("%lld", &a);
		int k = 100;
		int can = sqrt(a);
		long long tmp = 0;
		for(int i = 2; i <= can; ++i)
		{
			while(k--)
			{
				if(a % i == 0)
				{
					tmp = i;
					a /= i;
				}
				else break;
			}
		}
		if(tmp >= a) printf("%lld\n", tmp);
		else printf("%lld\n", a);
	}

}