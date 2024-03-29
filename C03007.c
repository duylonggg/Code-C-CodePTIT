#include <stdio.h>
#include <math.h>

#define ll long long

int is_prime(int n){
    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n % 2 == 0 || n % 3 == 0)
        return 0;
    for(int i = 5; i * i <= n; i += 6)
        if((n % i == 0) || (n % (i + 2) == 0))
            return 0;
    return 1;
}

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
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int dem = 0;
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i = a; i <= b; ++i)
		{
			if(is_prime(i) && cmp(i))
			{
				dem++;
			printf("%d ", i);
			if(dem % 10 == 0 ) printf("\n");
			}
		}
		printf("\n\n");
	}
}