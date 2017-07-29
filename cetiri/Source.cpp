#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;
array<int, 3> ar, d;
int main() {
	for (auto &a : ar) cin >> a;
	sort(ar.begin(), ar.end());
	adjacent_difference(ar.begin(), ar.end(), d.begin());
	if (d[1] == d[2]) cout << ar.back() + d[2];
	else if (d[1] > d[2]) cout << (ar[0] + ar[1]) / 2;
	else cout << (ar[1] + ar[2]) / 2;
}