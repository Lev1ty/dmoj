#include <iostream>
#include <string>
using namespace std;
string input; int hap, sad, pos;
int main() {
	getline(cin, input);
	pos = input.find(":-)");
	while (pos != string::npos) { hap++; input[pos] = '*'; pos = input.find(":-)"); }
	pos = input.find(":-(");
	while (pos != string::npos) { sad++; input[pos] = '*'; pos = input.find(":-("); }
	if (hap == sad) {
		if (hap == 0) cout << "none";
		else cout << "unsure";
	} else if (hap > sad) cout << "happy";
	else cout << "sad";
}