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
			for(int j = b - 1, cnt = i; j >= 1 && cnt > 1; --j, --cnt)
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
			for(int j = b - 1, cnt = i; j >= 1 && cnt > 1; --j, --cnt)
				printf("%d", j);
			printf("\n");
		}
		for(int i = b + 1; i <= a; ++i)
		{
            for(int j = i, cnt = 1; cnt <= b; --j, ++cnt)
                printf("%d", j);
            printf("\n");
		}			
	}
}