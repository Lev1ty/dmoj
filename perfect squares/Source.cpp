#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
array<bool, 10001> ar; int l, r, ans;
int main() {
	cin >> l >> r;
	for (int i = 0; i*i < ar.size(); i++)
		ar[i*i] = 1;
	for (int i = max(0, l); i <= r; i++)
		if (ar[i]) ans++;
	cout << ans;
}