#include <stdio.h>
 
int main()
{
	int t;
	scanf("%d", &t);
	int cnt = 0;
	while(t--)
	{
		int m, n;
		scanf("%d%d", &m, &n);
		int a[100][100];        
		int i, j, z;
		for(i = 0; i < m; ++i)
		{
			for(j = 0; j < n; ++j)
			{
				scanf("%d", &a[i][j]);
			}
		}
		int b[100][100];              
		for(i = 0; i < n; ++i)
		{
			for(j = 0; j < m; ++j)
			{
				b[i][j] = a[j][i];
			}
		}
		int c[100][100] = {};                                         
		for(i = 0; i < m; ++i)                                 
		{
			for(j = 0; j < m; ++j) 
			{ 
				for(z = 0; z < n; ++z)	
				{
					c[i][j] += a[i][z] * b[z][j];
				}
			}
		}
		printf("Test %d:\n", ++cnt);
		// ma trận tích sẽ là ma trận có m hàng và m cột
		for(i = 0; i < m; ++i)
		{
			for(j = 0; j < m; ++j)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
    return 0;
}