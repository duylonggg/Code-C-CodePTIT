//C02014
#include<stdio.h>
int main()
{  
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; ++i)
	{
		int check = a * 2 - 2 * i - 1;
		for(int j = a; j > a - i; --j)
		printf("%d", j);
		while(check--) printf("%d", a - i);
		for(int j = a - i + 1; j <= a; ++j)
		printf("%d", j);
		printf("\n");
	}
	for(int i = a - 2; i >= 0; --i)
	{
		int check = a * 2 - 2 * i - 1;
		for(int j = a; j > a - i; --j)
		printf("%d", j);
		while(check--) printf("%d", a - i);
		for(int j = a - i + 1; j <= a; ++j)
		printf("%d", j);
		printf("\n");
	}
}