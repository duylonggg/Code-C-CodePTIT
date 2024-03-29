#include<stdio.h>
long long x[1000];
void check()
{
	x[0] = 0;
	x[1] = 1;
	for(int i = 2; i < 1000; ++i)
	{
		x[i] = x[i - 1] + x[i - 2];
	} 
}
int main()
{
	int a;
	scanf("%d", &a);
	check();
	while(a--)
	{
		long long b;
		scanf("%lld", &b);
		for(int i = 0; i < 1000; ++i)
		{
			if(x[i] == b)
			{
				printf("YES");
				break;
			}
			else if(x[i] > b)
			{
				printf("NO");
				break;
			}
		}
		printf("\n");
	}
}