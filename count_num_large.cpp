//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n,sum=0, c=1, d=9, res=0;
//	scanf("%d", &n);
//	while (sum + d < n) {
//		res = res + c * d;
//		sum = sum + d;
//		c++;
//		d = d * 10;
//	}
//	res = res + ((n - sum) * c);
//	printf("% d\n", res);
//	return 0;
//}
//

// 1 * 9 = 9
// 2 * 90 = 180
// 189 개
// 3 * 900
// 4 * 9000
/// 256 - 99  =  157개
/// 157 * 3 + 189
/// 
/// 
/// 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum = 0,c = 1, d = 9, res = 0;
	scanf("%d", &n);
	while (sum + d < n) {
		res = res + c * d;
		sum = sum + d;
		c++;
		d = d * 10;
	}
	res = res + ((n - sum) * c);
	printf("%d\n", res);
	return 0;
}