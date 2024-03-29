// C04005
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		int max = -1;
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
			if(max < a[i])
				max = a[i];
		}
		printf("%d\n", max);
		for(int i = 0; i < n; ++i)
		{
			if(a[i] == max)
				printf("%d ", i);
		}
		printf("\n");
	}
    return 0;
}