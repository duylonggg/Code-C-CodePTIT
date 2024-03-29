//C02017
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; ++i)
	{
		for(int j = 1; j <= 2*i + 1; j += 2)
		{
			printf("%d", j);
		}
		for(int j = 2*i - 1; j >= 1; j -= 2)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}