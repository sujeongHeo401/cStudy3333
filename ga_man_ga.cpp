#define _CRT_SECURE_NO_WARNINGS
// '0' ~ '9'-> 48 ~ 57
#include <stdio.h>
int ch[10];
int main() {
	int i, digit, max = -2147000000, res;
	char a[101];
	scanf("%s", &a); /// 스트링으로 들어갔어
	for (i = 0; a[i] != '\0'; i++) {
		digit = a[i] - 48;
		ch[digit]++;
	}

	for (i = 0; i <= 9; i++) {
		if (ch[i] > max) {
			max = ch[i];
			res = i;
		}
	}
	printf("%d\n", res);
	return 0;

}