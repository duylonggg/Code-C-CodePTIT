#include<stdio.h>
#include<math.h>
int cmp(int a)
{
	int b = a;
	int soMoi = 0;
	while(a)
	{
		soMoi += (a % 10) * pow(10, (int) log10(a));
		a /= 10;
	}
	return soMoi == b;
}
int cmp1(int a)
{
	while(a)
	{
		int b = a % 10;
		if(b == 9) return 0;
		a /= 10;
	}
	return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	int dem = 0; 
	for(int i = 2; i < a; ++i)
	{
		if(cmp1(i) && cmp(i))
		{
			printf("%d ", i);
			++dem;
		}
	}
	printf("\n%d", dem);
}