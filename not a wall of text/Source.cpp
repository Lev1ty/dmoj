#include <iostream>
#include <string>
using namespace std;
int ans; string s;
int main() {
	getline(cin, s);
	int pos = s.find(' ');
	while (pos != string::npos) { s[pos] = '*'; ans++; pos = s.find(' '); }
	cout << ans + 1;
}