//C02021
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1 ; i <= n; i++)
    {
        printf("%d ",i);
        int z = 0 ;
        for (int j = 2 ; j <= i ; j ++)
        {
            z = z + n - j + i + 1;
            printf("%d ",z);
            z = z - i;
        }
       printf("\n");
    }

}