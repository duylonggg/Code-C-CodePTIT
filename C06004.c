#include <stdio.h>
#include <string.h>

int main(){
    int chu = 0, so = 0, khac = 0;
    char p[1000000];
    while(scanf("%s", p) != -1){
        for(int i = 0; i < strlen(p); ++i){
            if(('a' <= p[i] && p[i] <= 'z') || ('A' <= p[i] && p[i] <= 'Z'))
                ++chu;
            else if('0' <= p[i] && p[i] <= '9')
                ++so;
            else    
                ++khac;
        }
        ++khac;
    }
    printf("%d %d %d", chu, so, khac - 1);
    return 0;
}