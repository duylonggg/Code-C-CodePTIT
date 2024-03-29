#include <stdio.h>
#include <math.h>

#define ll long long

int find_pos(char s[], char c, int start){
    for(int i = start; i < 52; ++i)
        if(s[i] == c)
            return i;
    return -1;
}

int main(){
    char s[60];
    scanf("%s", s);
    int cnt1 = 0, cnt2 = 0, ans = 0;
    for(char c = 'A'; c <= 'Z'; ++c){
        int i = find_pos(s, c, 0);
        int j = find_pos(s, c, i + 1);
        int freq[260] = {};
        for(int k = i; k <= j; ++k){
            ++freq[s[k]];
            if(freq[s[k]] == 1) ++ans;
            else --ans;
        }
    }
    printf("%d", ans >> 1);
    return 0;
}