#include <stdio.h>
#include <math.h>

#define ll long long

typedef struct{
    int numb;
    int freq;
} Element;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        Element ele[n]; 
        int cnt = 0;
        int mx = 0;
        for(int i = 0; i < n; ++i){
            scanf("%d", &a[i]);
            int found = 0;
            
            for(int j = 0; j < cnt; ++j){
                if(ele[j].numb == a[i]){
                    ++ele[j].freq;
                    if(ele[j].freq > mx)
                        mx = ele[j].freq; 
                    found = 1;
                    break;
                }
            }
            
            if(!found){
                ele[cnt].numb = a[i];
                ele[cnt].freq = 1;
                if(mx == 0) 
                    mx = 1;
                ++cnt;
            }
        }
        
        
        for(int i = 0; i < cnt; ++i)
            if(mx == ele[i].freq)
                printf("%d ", ele[i].numb);
        printf("\n");
    }
    return 0;
}
