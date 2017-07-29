#include <iostream>
#include <string>
#include <array>
using namespace std;
array<string, 2> ar;
int main() {
	for (auto &a : ar) getline(cin, a);
	if ((ar[0].find("red") != string::npos || ar[0].find("green") != string::npos || ar[0].find("white") != string::npos)
		&& (ar[1].find("red") != string::npos || ar[1].find("green") != string::npos || ar[1].find("white") != string::npos))
		cout << "Jingle Bells";
	else cout << "Boring...";
}