#include <stdio.h>
#include <string.h>
#include <math.h>

#define ll long long

int main() {
    int t;
    scanf("%d\n", &t);

    while (t--) {
        char s[25];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        int cnt = 0;
        int len = strlen(s);

        for (int i = 0; i < len / 2; ++i)   
            cnt += (s[i] != s[len - i - 1]);

        if(cnt == 0)
            printf("%s\n", len & 1 ? "YES" : "NO");
        else if(cnt == 1)
            printf("%s\n", "YES");
        else
        printf("%s\n", "NO");
    }
    return 0;
}
