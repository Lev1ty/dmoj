#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n, m; string s; vector<int> v, input;
int main() {
	cin >> n; cin.ignore(1);
	input.resize(n); for (int i = 0; i < input.size(); i++) {
		cin >> s; input[i] = s.size();
	}
	cin >> m; v.resize(m);
	for (int i = 0; i < input.size(); i++) {
		auto it = min_element(v.begin(), v.end());
		cout << it - v.begin() + 1 << '\n';
		*it += input[i];
	}
}