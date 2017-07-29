#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <algorithm>
#include <set>
using namespace std;
array<int, 4> ar, as, de; set<int> s;
int main() {
	freopen("Text.txt", "r", stdin);
	for (auto &a : ar) { cin >> a; s.insert(a); }
	as = de = ar;
	sort(as.begin(), as.end());
	sort(de.rbegin(), de.rend());
	if (s.size() != ar.size() && as != de) { cout << "No Fish"; return 0; }
	if (as == de) cout << "Fish At Constant Depth";
	else if (ar == as) cout << "Fish Rising";
	else if (ar == de) cout << "Fish Diving";
	else cout << "No Fish";
}