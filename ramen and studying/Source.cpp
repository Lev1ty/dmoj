#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
unordered_map<string, int> m = { {"TOK",1},{"English",2},{"Chemistry",3},{"Math",4} };
vector<int> v; int c, n; string s;
int main() {
	cin >> c >> n;
	for (int i = 0; i < c; i++) {
		cin >> s;
		v.push_back(m[s]);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		n -= v[i];
		if (n < 0) {
			cout << "Go to Metro\n" << i;
			return 0;
		}
	}
	cout << "YEA BOI";
}