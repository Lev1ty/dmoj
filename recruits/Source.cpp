#include <iostream>
#include <vector>
using namespace std;
int n, ans, d; vector<int> v;
int main() {
	cin >> n; v.resize(n); for (auto &a : v) cin >> a;
	for (int i = 0; i < v.size(); i++) {
		int j = i;
		for (; j < v.size() && v[j] <= 41; j++);
		d = j - i;
		if (i == 0 && j == v.size());
		else if (i == 0 || j == v.size()) {
			d--;
		} else {
			d -= 2;
		}
		if (d > 0) ans += d;
		i = j;
	}
	cout << ans;
}