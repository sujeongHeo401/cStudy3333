﻿//1부터 N까지의 M의 배수합
#include <iostream>
using namespace std;
int main() {
	int n, m, i, sum = 0;

	cin >> n >> m;

	for (i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;
}

