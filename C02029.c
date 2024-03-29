//C02029
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 1; i <= a; ++i)
	{
		printf("%c ", i + 'A' - 1);
		int dem = 0;
		for(int j = 2; j <= i; ++j)
		{
			dem += (a - j) + i + 1;
			printf("%c ", dem + 'A' - 1);
			dem -= i; 
		}
		printf("\n");
	}
}