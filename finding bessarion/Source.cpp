#include <iostream>
#include <string>
using namespace std;
string ans, s; int n;
int main() {
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		ans += s;
	}
	cout << (ans.find("BayviewBessarionLeslie") != string::npos || ans.find("LeslieBessarionBayview") != string::npos ? 'Y' : 'N');
}