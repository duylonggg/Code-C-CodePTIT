#include <stdio.h>
int check(int n, int k) {
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		int check = i;
		while (check % 2 == 0) {
			++cnt;
			check /= 2;
		}
		if (cnt >= k) return 1;
	}
	return 0;
}
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%s", check(n, k) ? "YES" : "NO");
    return 0;
}
