#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i, cnt=0, tmp;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}