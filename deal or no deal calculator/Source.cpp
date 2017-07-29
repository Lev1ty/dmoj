#include <iostream>
#include <array>
#include <numeric>
using namespace std;
array<int, 11> m = { 0,100,500,1000,5000,10000,25000,50000,100000,500000,1000000 };
int total, n, offer, ans;
int main() {
	cin >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		ans -= m[j];
	}
	cin >> offer;
	total = accumulate(m.begin(), m.end(), 0);
	ans += total;
	cout << (ans / (10.0 - n) > offer ? "no deal" : "deal");
}