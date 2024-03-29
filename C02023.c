#include <stdio.h>
 
int main()
{
	int m, n, maxMN;
	scanf("%d%d", &m, &n);
	if (m > n)
		maxMN = m;
	else
		maxMN = n;
	for (int i = 0, minRow = 'a' - 1 + maxMN; i < m; ++i, --minRow)
	{
		int dem = 0;
		for (int j = 'a' - 1 + maxMN; j > minRow && dem < n; --j)
		{
			printf("%c", j);
			++dem;
		}
		while (dem++ < n)
			printf("%c", minRow);
		printf("\n");
	}
}