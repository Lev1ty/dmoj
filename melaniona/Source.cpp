#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#include <array>
#include <cmath>
using namespace std;
array<tuple<double, double, double>, 4> ar; string s; double ans;
int main() {
	cin >> s; for (auto &a : ar) cin >> get<1>(a) >> get<2>(a) >> get<0>(a);
	sort(ar.begin(), ar.end());
	if (s == "trees!") get<1>(ar.back()) = get<2>(ar.back());
	else get<1>(ar.back()) = 0;
	for (auto &a : ar) ans += get<0>(a)*get<1>(a) * 100 / get<2>(a);
	cout << round(ans);
}