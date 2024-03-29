#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a <= b)
	{
		for(int i = 1; i <= a; ++i)
		{
			for(int j = i; j <= b; ++j)
				printf("%d", j);
			for(int j = i - 1; j >= 1; --j)
				printf("%d", j);
			printf("\n");
		}
	}
	else
	{
		for(int i = 1; i <= b; ++i)
		{
			for(int j = i; j <= b; ++j)
				printf("%d", j);
			for(int j = i - 1; j >= 1; --j)
				printf("%d", j);
			printf("\n");
		}
		for(int i = b + 1; i <= a; ++i)
		{
            int dem = 1;
			while(dem) 
            {
			    printf("%d", i);
				dem--;
			}
			for(int j = b - 1; j >= 1; --j)
				printf("%d", j);
			printf("\n");
		}			
	}
}