#include <stdio.h>
#include <vector>
#include <algorithm>

//////////////5367
/////////// 각 자리 수가 3보다 큰 경우, 3보다 작은 경우 3고과 같은 경우
using namespace std;
int main() {

	int n, tmp, i, cnt = 0, digit;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		/*tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3) cnt++;
			tmp = tmp / 10;
		}*/
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3) cnt++;
			tmp = tmp / 10;
		}
	}

	printf("%d\n", cnt);

	return 0;
}

///3의 갯수를 구하는 문제여따,,,,