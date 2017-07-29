#include <iostream>
#include <string>
using namespace std;
int w, h, b; string s;
int main() {
	cin >> w >> h; cin.ignore(1);
	for (int i = 0; i < h; i++) {
		getline(cin, s);
		while (1) {
			int pos = s.find('o');
			if (pos == string::npos) break;
			s[pos] = ' ';
			b++;
		}
		while (1) {
			int pos = s.find('*');
			if (pos != string::npos) break;
			s[pos] = ' ';
		}
		cout << s << '\n';
	}
	for (int i = 0; i < b; i++) {
		cout << 'o';
	}
}