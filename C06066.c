#include <stdio.h>
#include <string.h>
#define endl printf("\n")
 
void tong(char a[1005], char b[1005], char ans[1005])
{
    while(strlen(a) < strlen(b))
    {
        char tmp[1005] = {};
        tmp[0] = '0';
        strcat(tmp, a); 
        strcpy(a, tmp);
    }
    while(strlen(a) > strlen(b))
    {
        char tmp[1005] = {};
        tmp[0] = '0';
        strcat(tmp, b);
        strcpy(b, tmp);
    }
    int rmb = 0, x;
    for(int i = strlen(a) - 1; i >= 0; --i)
    {
        x = a[i] - '0' + b[i] - '0' + rmb;
        rmb = x / 10;
        ans[i] = (x % 10) + '0';
    }
    if(rmb > 0)
    {
        char tmp[1005] = {};
        tmp[0] = '1';
        strcat(tmp, ans);
        strcpy(ans, tmp);
    }
}

void xuLy(char n[]){
    int len = strlen(n);
    len >>= 1;
    char a[1005] = {};
    char b[1005] = {};

    for(int i = 0; i < len; ++i)
        a[i] = n[i];
    for(int i = len, j = 0, check = 0; i < strlen(n); ++i){
        if(n[i] == '0' && check == 0){
            continue;
        }
        b[j++] = n[i];
        check = 1;
    }

    if(strlen(b) == 0){
        b[0] = '0';
    }

    // puts(a);
    // puts(b);

    char ans[1005] = {};
    tong(a, b, ans);
    puts(ans);
    strcpy(n, ans);
    // printf("%d\n", strlen(n));
}
 
int main(){
    char n[1005] = {};
    gets(n);
    while(strlen(n) > 1){
        xuLy(n);
    }
    // xuLy(n);
    // xuLy(n);
    // xuLy(n);
    // xuLy(n);
    return 0;
}