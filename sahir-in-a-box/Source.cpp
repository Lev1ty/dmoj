#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>
using namespace std;
array<vector<pair<int, int>>, 2> ar; int n, p, q, r, s;
int main() {
	cin >> n;
	for (auto &a : ar) a.resize(n);
	for (int i = 0, j, k; i < n; i++) {
		cin >> j >> k;
		ar[0][i].first = ar[1][i].second = j;
		ar[0][i].second = ar[1][i].first = k;
	}
	for (auto &a : ar) sort(a.rbegin(), a.rend());
	p = ar[0][0].first, q = ar[1][0].first;
	for (auto &a : ar) sort(a.begin(), a.end());
	r = ar[0][0].first, s = ar[1][0].first;
	cout << (p - r)*(q - s);
}