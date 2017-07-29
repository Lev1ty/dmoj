#include <iostream>
#include <array>
#include <math.h>
using namespace std;
array<int, 1001> ar; int l, r, ans;
int main() {
	fill(ar.begin() + 1, ar.end(), 1);
	for (int i = 2; i < 1000; i++)
		for (int j = i; j < 1000; j += i)
			ar[j]++;
	cin >> l >> r;
	for (int i = l; i <= r; i++)
		if (ar[i] == 4)
			ans++;
	cout << "The number of RSA numbers between " << l << " and " << r << " is " << ans << '\n';
}