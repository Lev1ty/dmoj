#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int n; string s, c = "ClCl, BrBr, XeXe, KrKr, SiSi, AsAs, RnRn, NeNe, HeHe, HH, CC, NN, OO, FF, PP, SS, II";
int main() {
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++) {
		bool flag = 0;
		getline(cin, s);
		stringstream ss(s);
		while (ss >> s) {
			if (c.find(s) == string::npos) {
				cout << "Not molecular!\n";
				flag = 1;
				break;
			}
		}
		if (!flag) cout << "Molecular!\n";
	}
}