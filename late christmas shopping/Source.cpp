#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
set<int> s; int n, m;
int main() {
	cin >> n;
	for (int i = 0, si; i < n; i++) {
		cin >> m; si = s.size();
		for (int j = 0, k; j < m; j++) {
			cin >> k;
			s.insert(k);
		}
		if (i > 0 && s.size() < si + m) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}