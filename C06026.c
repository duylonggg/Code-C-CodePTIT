#include <stdio.h>
#include <string.h>

int check(char s[])
{
    for (int i = 0; i < strlen(s) / 2; ++i)
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int checkTok(int f[], char tok[1005][1005], char s[], int cnt)
{
    for (int i = 0; i < cnt; ++i)
    {
        if (strcmp(tok[i], s) == 0)
        {
            ++f[i];
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s[105];
    char tok[1005][1005];
    int cnt = 0;
    int maxLength = 0;
    int f[1005] = {};
    while (scanf("%s", s) != -1)
    {
        if (check(s))
        {
            if (!checkTok(f, tok, s, cnt))
            {
                strcpy(tok[cnt], s);
                ++f[cnt++];
                if (maxLength < strlen(s))
                    maxLength = strlen(s);
            }
        }
    }

    for(int i = 0; i < cnt; ++i){
        if(strlen(tok[i]) == maxLength)
            printf("%s %d\n", tok[i], f[i]);
    }
    return 0;
}