#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
array<int, 2> ans; int n;
int main() {
	for (int i = 0; i < 2; i++) {
		cin >> n;
		for (int j = 0, k, l; j < n; j++) {
			cin >> k >> l;
			ans[i] = max(ans[i], k*l);
		}
	}
	cout << (ans[0] == ans[1] ? "Tie" : ans[0] < ans[1] ? "Natalie" : "Casper");
}