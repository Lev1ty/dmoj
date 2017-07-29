#include <iostream>
#include <array>
using namespace std;
array<int, 6> c = { 1,1,2,2,2,8 }, v;
int main() {
	for (auto &a : v) cin >> a;
	for (int i = 0; i < 6; i++) {
		cout << c[i] - v[i] << ' ';
	}
}