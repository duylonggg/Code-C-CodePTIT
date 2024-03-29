// C03041
#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(abs(b - d) == abs(a - c))
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}