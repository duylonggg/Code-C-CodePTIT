#include <stdio.h>
#include <string.h>
#define endl printf("\n")
int numb[] = {1, 5, 10, 50, 100, 500, 1000, 0};
char numbLM[] = "IVXLCDM";
// I: 1
// V: 5
// X: 10
// L: 50
// C: 100
// D: 500
// M: 1000

int findPost(char s)
{
    for (int i = 0; i < 7; ++i)
        if (numbLM[i] == s)
            return i;
}

int check(char s[], int i)
{
    if (numb[findPost(s[i - 1])] < numb[findPost(s[i])])
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--){
    char s[25];
        scanf("%s", s);
        int cnt = numb[findPost(s[0])];
        for (int i = 1; i < strlen(s); ++i)
        {
            cnt += numb[findPost(s[i])];
            if(check(s, i)){
                cnt -= 2*numb[findPost(s[i - 1])];
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}