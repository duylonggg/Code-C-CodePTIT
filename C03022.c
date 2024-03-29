#include<stdio.h>
int a[1000003];
void check()
{
	for(int i = 0; i <= 1000005; ++i)
	{
		a[i] = 1;
	}
	a[0] = a[1] =  0;
	for(int i = 2; i <= 1000; ++i)
	{
		if(a[i])
		{
			for(int j = i * i; j <= 1000004; j += i)
			{
				a[j] = 0;
			}
		}
	}
}
int checkTong(int a)
{
	int tong = 0;
	while(a)
	{
		tong = (tong % 5 + (a % 10) % 5) % 5;
		a /= 10;
	}

	return tong == 0;
}
int main()
{
	check();
	int t;
	scanf("%d", &t);
	int dem = 0;
	for(int i = 0; i < t; ++i)
	{
		if(a[i])
		{
			if(checkTong(i) == 1)
			{
				printf("%d ", i);
				dem++;
			}
		}

	}
	printf("\n");
	printf("%d", dem);

}