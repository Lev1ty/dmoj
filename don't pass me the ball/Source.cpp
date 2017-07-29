#include <iostream>
#include <array>
using namespace std;
using ll = long long;
int n; array<ll, 100> fac;
unsigned nChoosek(unsigned n, unsigned k) {
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	int result = n;
	for (int i = 2; i <= k; ++i) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}
int main() {
	fac[0] = fac[1] = 1;
	for (int i = 2; i < 100; i++) fac[i] = i*fac[i - 1];
	cin >> n; n--;
	cout << nChoosek(n, 3);
}