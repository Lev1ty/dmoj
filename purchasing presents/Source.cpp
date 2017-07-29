#include <iostream>
#include <iomanip>
using namespace std;
int n; double d, e, ans; constexpr int multiplier = 100000000;
int main() {
	cin >> n >> d; d *= multiplier;
	for (int i = 0; i < n; i++) {
		cin >> e;
		e *= multiplier;
		ans += e;
	}
	if (d >= 0) cout << fixed << setprecision(2) << (d - ans) / multiplier;
	else cout << "Fradin's broke";
}