#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;
int n; array<vector<int>, 2> ar, par;
int main() {
	cin >> n;
	for (int i = 0; i < 2; i++) {
		ar[i].resize(n);
		for (int j = 0; j < n; j++) {
			cin >> ar[i][j];
		}
		par[i].resize(n);
		partial_sum(ar[i].begin(), ar[i].end(), par[i].begin());
	}
	for (int i = par[0].size() - 1; i >= 0; i--) {
		if (par[0][i] == par[1][i]) {
			cout << i + 1;
			return 0;
		}
	}
	cout << 0;
}