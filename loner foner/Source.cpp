#include <iostream>
#include <string>
using namespace std;
int n; string s;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.size() == 10 && (s.substr(0, 3) == "416" || s.substr(0, 3) == "647")) cout << '(' << s.substr(0, 3) << ")-" << s.substr(3, 3) << '-' << s.substr(6) << '\n';
		else cout << "not a phone number\n";
	}
}