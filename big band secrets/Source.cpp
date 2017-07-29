#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int k; string s;
int main() {
	freopen("Text.txt", "r", stdin);
	cin >> k; cin.ignore(1);
	getline(cin, s);
	for (int i = 0, j; i < s.size(); i++) {
		j = int(s[i] - 'A');
		j -= k + 3 * (i + 1);
		cout << char('A' + ((j + 26) % 26));
	}
}