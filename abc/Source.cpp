#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;
array<int, 3> ar; string s;
int main() {
	for (auto &a : ar) cin >> a; cin >> s;
	sort(ar.begin(), ar.end());
	for (int i = 0; i < 3; i++) {
		cout << ar[s[i] - 'A'] << ' ';
	}
}