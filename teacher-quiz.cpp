#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int a[60], b[60];
int main() {
	int n, sum = 0, i, j, m, ans;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &m, &ans);
		sum = 0; 
		for (j = 1; j <= m; j++) {
			sum = sum + j;
		}
		if (ans == sum) a[i] = 0;
		else a[i] = 1;
	}
	for (i = 1; i <= n; i++) {
		printf("%d", a[i]);
	}
	return 0;
}