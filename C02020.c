//C02020
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; ++i)
	{
		for(int j = a - i - 1; j > 0; --j)
		{
			printf("~");
		}
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