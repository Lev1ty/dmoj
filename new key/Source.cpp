#include <iostream>
#include <string>
using namespace std;
string key = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", s;
int main() {
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		cout << key[key.find(s[i]) + 9];
	}
}