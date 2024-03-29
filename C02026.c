#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		for(int i = 0; i < a ; ++i)
		{
			for(int j = 'A' + a - i - 1; j <= 'A' + b - 1 ; ++j)
				printf("%c", j);
			for(int j = a - i - 1; j > 0; --j)
				printf("%c", 'A' + b - 1);
			printf("\n");
		}
	}
	else
	{
		for(int i = b; i < a; ++i)
		{
			for(int j = 0; j < b; ++j)
				printf("%c", 'A' + b - 1);
			printf("\n");
		}
		for(int i = 0; i < b ; ++i)
		{
			for(int j = 'A' + b - i - 1; j <= 'A' + b - 1 ; ++j)
				printf("%c", j);
			for(int j = b - i - 1; j > 0; --j)
				printf("%c", 'A' + b - 1);
			printf("\n");
		}
	}
}

