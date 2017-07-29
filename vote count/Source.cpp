#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main() {
	freopen("Text.txt", "r", stdin);
	cin.ignore(2);
	getline(cin, s);
	sort(s.begin(), s.end());
	int sep = s.find_last_of('A');
	cout << (sep + 1 == s.size() - sep - 1 ? "Tie" : sep + 1 < s.size() - sep - 1 ? "B" : "A");
}