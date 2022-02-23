#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;
int main() {
	int i, j, n, cnt = 0;
	scanf("%d", &n);
	vector<int> a(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	printf("1 "); /// 첫번째 사람은 1
	for (i = 2; i <= n; i++) {
		cnt = 0;
		for (j = i - 1; j >= 1; j--) {
			if (a[j] >= a[i]) cnt++;
		}
		printf("%d ", cnt + 1);
	}
	return 0;

}