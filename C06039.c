#include <stdio.h>
#include <string.h>

#define MAX_LEN 105

int rotate(char *a, char *b) {
    if (strcmp(a, b) == 0)
        return 0;
    int cnt = 0;
    int len = strlen(a);
    for (int i = 1; i < len; ++i) {
        ++cnt;
        char tmp[MAX_LEN];
        strcpy(tmp, &b[i]);
        strcat(tmp, b);
        tmp[len] = '\0';
        if (strcmp(tmp, a) == 0)
            return cnt;
    }
    int b_len = strlen(b);
    for (int i = 0; i < b_len / 2; i++) {
        char temp = b[i];
        b[i] = b[b_len - i - 1];
        b[b_len - i - 1] = temp;
    }
    if (strcmp(a, b) == 0)
        return len;
    return -1;
}

int solve(char strs[][MAX_LEN], int len) {
    int ans = 1e9;
    for (int i = 0; i < len; ++i) {
        int cnt = 0;
        for (int j = 0; j < len; ++j) {
            int n = rotate(strs[i], strs[j]);
            if (n == -1)
                return -1;
            cnt += n;
        }
        if (cnt < ans)
            ans = cnt;
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    char strs[n][MAX_LEN];
    for (int i = 0; i < n; ++i)
        scanf("%s", strs[i]);
    int result = solve(strs, n);
    printf("%d", result);
    return 0;
}