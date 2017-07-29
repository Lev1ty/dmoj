#include <iostream>
#include <string>
using namespace std;
int n; string s;
int main() {
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		while (s.size() != 1) {
			int j = 0;
			for (auto &a : s) j += a - '0';
			s = to_string(j);
		}
		cout << s << '\n';
	}
}