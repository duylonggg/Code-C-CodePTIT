#include <stdio.h>

int count(char *s, char a, char b) {
    int cnt1 = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if(s[i] == a)
            ++cnt1;
        if(s[i] == b)
            --cnt1;
        if(cnt1 < 0)
            return 0;
    }
    return cnt1 == 0;
}

int main() {
    char s[1001];
    scanf("%s", s);
    printf("%d\n", (count(s, '(', ')') && count(s, '{', '}') && count(s, '[', ']') && count(s, '\"', '\"') && count(s, '\'', '\'')) ? 1 : 0);
    return 0;
}
