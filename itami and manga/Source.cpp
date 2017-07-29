#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;
int n; pair<double, string> ans, p;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p.second >> p.first;
		ans = max(ans, p);
	}
	cout << ans.second;
}