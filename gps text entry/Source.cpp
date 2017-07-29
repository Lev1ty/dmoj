#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
unordered_map<char, int> m; int ans; char pre = 'A'; string s;
int main() {
	for (int i = 0; i < 26; i++) m[char('A' + i)] = i;
	m[' '] = 26; m['-'] = 27; m['.'] = 28; m['e'] = 29;
	getline(cin, s);
	for (auto &c : s) {
		ans += abs(int(m[c] % 6 - m[pre] % 6)) + abs(int(m[c] / 6 - m[pre] / 6));
		pre = c;
	}
	ans += abs(int(m['e'] % 6 - m[pre] % 6)) + abs(int(m['e'] / 6 - m[pre] / 6));
	cout << ans;
}