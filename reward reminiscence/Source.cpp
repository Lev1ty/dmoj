#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int t, n, b;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> b;
		vector<int> v(n - 1);
		for (auto &a : v) cin >> a;
		sort(v.begin(), v.end());
		auto it = upper_bound(v.begin(), v.end(), b);
		cout << fixed << setprecision(2) << "Bob wins $" << sqrt(n - (v.end() - it)) * 100 << " at IOI!\n";
	}
}