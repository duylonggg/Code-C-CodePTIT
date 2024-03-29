#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d", &a);
	while(a--)
	{
		int b;
		scanf("%d", &b);
		int can = sqrt(b);
		int dem = 0;
		for(int i = 2; i <= can; ++i)
		{
			if(b % i == 0) 
			{
				dem +=(i % 2 == 0) + ((b / i) % 2 == 0);
			}
		}
		if(can * can == b && can % 2 == 0) dem--;
		if(b % 2 == 0) dem++;
		printf("%d\n", dem);
	}
}