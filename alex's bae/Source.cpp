#include <iostream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;
array<string, 2> ar;
int main() {
	for (auto &a : ar) {
		getline(cin, a);
		sort(a.begin(), a.end());
	}
	cout << (ar[0] == ar[1] ? "yes" : "no");
}