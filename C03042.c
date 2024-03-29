// C03042
#include <stdio.h>
int check(int n)
{
	int x = n % 10;
	n = n / 10;
	while(n)
	{
		int a = n % 10;
		if(x >= a)
			return 0;
		else
		{
			x = a;
			n = n / 10;	
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; ++i)
		{
			if(check(i))
				++cnt;
		}
		printf("%d\n", cnt);
	}
    return 0;
}