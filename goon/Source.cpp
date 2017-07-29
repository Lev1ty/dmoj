#include <iostream>
#include <string>
using namespace std;
string s; int a, b, c;
int main() {
	getline(cin, s);
	a = [](auto a) {int x = s[0] - '0', y = s[1] - '0', z = s[2] - '0'; return x + y + z; }(s.substr(0, s.find('-')));
	s.erase(s.begin(), s.begin() + s.find('-') + 1);
	b = [](auto a) { int x = s[0] - '0', y = s[1] - '0', z = s[2] - '0'; return x + y + z; }(s.substr(0, s.find('-')));
	s.erase(s.begin(), s.begin() + s.find('-') + 1);
	c = [](auto a) {int x = s[0] - '0', y = s[1] - '0', z = s[2] - '0', q = s[3] - '0'; return x + y + z + q; }(s);
	cout << (a == b&&b == c ? "Goony!" : "Pick up the phone!");
}