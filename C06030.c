#include <stdio.h>
#include <math.h>

#define ll long long

int check(char f1[1005][105], int f2[], char p[105], int cnt){
	for(int i = 0; i < cnt; ++i){
		if(strcmp(f1[i], p) == 0){
			++f2[i];
			return f2[i];
		}
	}
	return 0;
}

int max;

int main(){
    char s[105];
	char f1[1005][105];
	int f2 [1005] = {};
	int cnt = 0;
	while(scanf("%s ", s) != -1){
		if(!check(f1, f2, s, cnt)){
			strcpy(f1[cnt], s);
			++f2[cnt];
			++cnt;
		}
        if(max < strlen(s))
            max = strlen(s);
	}
    for(int i = 0; i < cnt; ++i)
        if(strlen(f1[i]) == max)
            printf("%s %d %d\n", f1[i], strlen(f1[i]), f2[i]);
    return 0;
}