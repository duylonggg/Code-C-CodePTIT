#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d\n", &n, &m);
        char matrix[1000][1000];
        for(int i = 0; i < n; ++i)
            scanf("%s", matrix[i]);
        int row1[1005] = {}, row2[1005] = {}, col1[1005] = {}, col2[1005] = {};
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                row1[i] += (matrix[i][j] == '1');
                col1[j] += (matrix[i][j] == '1');
                row2[i] += (matrix[i][j] == '2');
                col2[j] += (matrix[i][j] == '2');
            }
        }
        ll ans = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                ans += 1ll * (matrix[i][j] == '1') * row2[i] * col2[j];
                ans += 1ll * (matrix[i][j] == '2') * row1[i] * col1[j];
            }
        }
        printf("%lld\n", ans);
    }    
    return 0;
}