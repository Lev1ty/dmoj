#include <iostream>
#include <string>
using namespace std;
string s, c, t; int n;
int main() {
	getline(cin, c);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		t = c;
		while (t.find('>') != string::npos) {
			int j = t.find('>');
			t.erase(t.begin() + j);
			t.insert(j, s);
		}
		cout << t << '\n';
	}
}