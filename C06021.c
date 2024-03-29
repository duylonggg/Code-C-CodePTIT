#include <stdio.h>
#include <string.h>

int check(char a[]){
    int n = strlen(a);
    if (a[0] == '0')
        return -1;
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i){
        if(a[i] >= '0' && a[i] <= '9'){
            if ((a[i] - '0') % 2 == 0)
                even++;
            else if ((a[i] - '0') % 2 == 1)
                odd++;
        }
        else
            return -1;
    }
    if (even > odd && n % 2 == 0)
        return 1;
    if (odd > even && n % 2 == 1)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[1005];
        scanf("%s", a);
        int k = check(a);
        if (k == 1)
            printf("YES\n");
        else if (k == 0)
            printf("NO\n");
        else
            printf("INVALID\n");
    }
}