//C02016
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 1; i <= a; ++i)
	{
		for(int j = 1 + (i % 2 == 0); j <= 2 * i - (i % 2 == 1); j += 2)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}