#include <stdio.h>
#include <string.h>

int main(){
    while(1){
        int n;
        scanf("%d", &n); 
        if(!n) return 0; 
        getchar(); 

        char s1[205], s2[205], s[40005];
        fgets(s1, 205, stdin);
        s1[strcspn(s1, "\n")] = 0; 

        fgets(s2, 205, stdin); 
        s2[strcspn(s2, "\n")] = 0; 

        fgets(s, 40005, stdin); 
        s[strcspn(s, "\n")] = 0; 

        int found = 0;
        for(int i = 0; i < (n << 1); ++i){
            char tmp[40005] = {0};
            int cnt = 0;
            for(int j = 0; j < n; ++j){
                tmp[cnt++] = s2[j];
                tmp[cnt++] = s1[j];
            }
            if(strcmp(tmp, s) == 0){
                printf("%d\n", i + 1);
                found = 1; 
                break;
            }

            // Ham memcpy(xau dich, bat dau, so ptu cpy):
            // memcpy(s1, tmp, n); 
            // memcpy(s2, tmp + n, n); 

            // Copy chay:
            for(int i = 0; i < n; ++i)
                s1[i] = tmp[i];
            for(int i = n, j = 0; i < (n << 1); ++i, ++j)  
                s2[j] = tmp[i];
        }
        if(!found) printf("-1\n"); 
    }
    return 0;
}