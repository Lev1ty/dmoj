#include <iostream>
#include <array>
using namespace std;
array<int, 6> ar; int aif, cutoff, sum;
int main() {
	for (auto &a : ar) cin >> a;
	cin >> aif >> cutoff;
	for (auto &a : ar) sum += a;
	sum /= 6;
	cout << (sum + aif >= cutoff ? "yes" : "no");
}