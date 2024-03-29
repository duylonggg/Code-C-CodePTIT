#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int dem;
	for(int i = 0; i < a ; ++i)
	{
		dem = i * (i + 1) / 2; 
		if(i % 2 == 1)
		{ 
			for(int j = dem + i + 1; j >= dem + 1; --j )
			{
				printf("%c ", j + 'a' - 1);
			}
		}
		else for(int j = dem + 1; j <= dem + i + 1; ++j)
			printf("%c ", j + 'a' - 1);
		printf("\n");
	}
}