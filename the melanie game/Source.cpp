#include <iostream>
#include <string>
using namespace std;
string c, s; int k;
int main() {
	for (int i = 0; i < 26; i++) {
		c += 'A' + i;
	}
	cin >> k >> s;
	for (int i = 0, j; i < s.size(); i++) {
		j = (s[i] - 'A' - 3 * (i + 1) - k + 26) % 26;
		s[i] = 'A' + j;
	}
	cout << s;
}