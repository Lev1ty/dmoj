#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
int n; array<int, 2> ar; array<vector<int>, 2> v;
int main() {
	cin >> n;
	for (auto &a : v) a.resize(n);
	for (auto &a : v)
		for (auto &b : a)
			cin >> b;
	for (int i = 0; i < n; i++) {
		if (v[0][i] == v[1][i]) continue;
		if (v[0][i] < v[1][i]) ar[0]++;
		else ar[1]++;
	}
	cout << ar[1] << ' ' << ar[0] << '\n' << (ar[0] == ar[1] ? "Tie" : ar[0] > ar[1] ? "FatalEagle" : "Xyene");
}