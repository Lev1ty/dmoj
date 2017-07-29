#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <array>
using namespace std;
int n; vector<pair<int, int>> v;
int main() {
	cin >> n; v.resize(n);
	for (auto &a : v) cin >> a.second >> a.first;
	sort(v.rbegin(), v.rend());
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first != v[i - 1].first) {
			cout << v[i - 1].second << ' ' << v[i - 1].first;
			return 0;
		}
	}
	cout << v[0].second << ' ' << v[0].first;
}