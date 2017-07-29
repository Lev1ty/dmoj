#include <iostream>
using namespace std;
int n, m, ans;
int main() {
	cin >> n >> m;
	for (int i = 0, j; i < m; i++) {
		cin >> j;
		if (j >= n) ans++;
	}
	cout << ans;
}