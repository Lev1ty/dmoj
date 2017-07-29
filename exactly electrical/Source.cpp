#include <iostream>
#include <cmath>
using namespace std;
int a, b, c, d, t, ans;
int main() {
	cin >> a >> b >> c >> d >> t;
	ans = abs(a - c) + abs(b - d);
	if (ans <= t && (t - ans) % 2 == 0) cout << "Y";
	else cout << "N";
}