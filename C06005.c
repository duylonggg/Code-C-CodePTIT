#include <stdio.h>
#include <string.h>
#include <ctype.h>
int check(char f1[1005][1005], int f2[], char p[100], int cnt)
{
	for(int i = 0; i < cnt; ++i)
	{
		if(strcmp(f1[i], p) == 0)
		{
			++f2[i];
			return f2[i];
		}
	}
	return 0;
}
int main()
{
	char s[1005];
	gets(s);
	char f1[1005][1005];
	int f2 [1005] = {};
	char *p = strtok(s, " \n");
	int cnt = 0;
	while(p)
	{
		for(int i = 0; i < strlen(p); ++i)
		{
			p[i] = tolower(p[i]);
		}
		if(!check(f1, f2, p, cnt))
		{
			strcpy(f1[cnt], p);
			++f2[cnt];
			++cnt;
		}
		p = strtok(NULL, " \n");
	}
	for(int i = 0; i < cnt; ++i)
		printf("%s %d\n", f1[i], f2[i]);
    return 0;
}