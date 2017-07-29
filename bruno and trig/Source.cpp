#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
array<int, 3> ar;
int main() {
	for (auto &a : ar) cin >> a;
	sort(ar.begin(), ar.end());
	if (ar[0] + ar[1] > ar[2]) cout << "Huh? A triangle?";
	else cout << "Maybe I should go out to sea...";
}