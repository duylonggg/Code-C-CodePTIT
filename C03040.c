// C03040
#include <stdio.h>

int tongChuSo(long long num) 
{
    int sum = 0;
    while (num) 
	{
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    long long n;
    scanf("%lld", &n);
    int sum1 = tongChuSo(n);
    int sum2 = 0;

    for (long long i = 2; i * i <= n; ++i) 
	{
        while (n % i == 0) 
		{
            if (i > 10) 
			{
                sum2 += tongChuSo(i);
            } else 
			{
                sum2 += i;
            }
            n /= i;
        }
    }

    if (n > 1) 
	{
        sum2 += tongChuSo(n);
    }

    if (sum1 == sum2) 
	{
        printf("YES");
    } else 
	{
        printf("NO");
    }

    return 0;
}