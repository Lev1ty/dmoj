#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
int n; string s, st; stringstream ss; set<string>S;
int main() {
	freopen("Text.txt", "r", stdin);
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		S.insert(s);
	}
	s = "";
	while (getline(cin, st))
		s += st;
	ss = stringstream(s);
	while (ss >> s)
		if (!S.count(s)) {
			cout << "Incorrect\n";
			return 0;
		}
	cout << "Correct\n";
}