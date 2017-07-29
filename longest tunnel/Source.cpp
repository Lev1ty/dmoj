#include <iostream>
#include <algorithm>
using namespace std;
int n, ans;
int main() {
	cin >> n;
	for (int i = 0, j, k; i < n; i++) {
		cin >> j >> k;
		ans = max(ans, k - j);
	}
	cout << ans;
}