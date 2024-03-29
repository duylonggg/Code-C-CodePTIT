#include<stdio.h>
#include<math.h>
int main()
{
	int b[] = {0, 1, 9, 18, 90, 180, 900, 1800, 9000};
	int a;
	scanf("%d", &a);
	while(a--)
	{
		int t;
		scanf("%d", &t);
		printf("%d\n", b[t - 1]);
	}
	
}