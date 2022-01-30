#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n, i, cnt = 0, h[101], max;
	for (i = 1; i <= n; i++) {
		scanf("%d", &h[i]);
	}
	max = h[n];
	for (i = n - 1; i >= 1; i--) {
		if (h[i] > max) {
			max = h[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
