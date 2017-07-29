#include <iostream>
#include <string>
using namespace std;
string s; bool flag, valid;
int main() {
	cin >> s;
	if (s == "416") flag = 1;
	if (s == "416" || s == "647" || s == "437") valid = 1;
	cin >> s;
	if (s.size() != 7) valid = 0;
	if (valid) {
		if (flag) cout << "valuable";
		else cout << "valueless";
	} else cout << "invalid";
}