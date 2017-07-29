#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int n, t, ans; double j, k;
int main() {
	freopen("Text.txt", "r", stdin);
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> j >> k;
		j *= 1 - 0.01*k;
		if (j <= t) ans++;
	}
	cout << ans;
}