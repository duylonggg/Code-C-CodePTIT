//C02030
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; ++i)
	{
		printf("@");

		for(int j = 'B'; j <= 'B' + 2*i - 2; j += 2)
			printf("%c", j);
		for(int j = 'B' + 2*(i-1) - 2; j >= 'B'; j -= 2)
			printf("%c", j);
		if(i>0)
			printf("@");

		printf("\n");
	}
}