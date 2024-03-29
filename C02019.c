//C02019
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; ++i)
	{
		for(int j = 2; j <= 2*i + 2; j += 2)
		{
			printf("%d", j);
		}
		for(int j = 2*i; j >= 2; j -= 2)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}