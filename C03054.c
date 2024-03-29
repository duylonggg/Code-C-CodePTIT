#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		long long b = n;
		int cnt = 0;
		while(b)
		{
			b /= 10;
			++cnt;
		}
		int a[cnt];
		int i = 0;
		int var = 0;
		while(n)
		{
			int check = n % 10;
			if(check != 0 && check != 1 && check != 8 && check != 9)
			{
				printf("INVALID\n");
				var = 1;
				break;
			}
			else if(check == 0 || check == 8 || check == 9)
			{
				a[i] = 0;
				++i;
			}
			else if(check == 1)
			{
				a[i] = 1;
				++i;
			}
			n /= 10;	
		}
		if(var == 0)
		{
			int ok = 0;
			for(int i = cnt - 1; i >= 0; --i)
			{
				if(a[i] == 1)
					ok = 1;
				if(ok)
					printf("%d", a[i]);
			}
			if(ok == 0)
				printf("INVALID\n");
			else
				printf("\n");
		}
	}
    return 0;
}