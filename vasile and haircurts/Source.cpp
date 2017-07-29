#include <iostream>
using namespace std;
int n, l, a, b, f, d;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> a >> b >> f;
		d = l - f;
		cout << (d >= a&&d <= b ? "Yes" : "No") << '\n';
	}
}