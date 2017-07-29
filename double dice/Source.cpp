#include <iostream>
#include <array>
using namespace std;
array<int, 2> ar = { 100,100 }; int n;
int main() {
	cin >> n;
	for (int i = 0, j, k; i < n; i++) {
		cin >> j >> k;
		if (j == k) continue;
		else if (j < k) ar[0] -= k;
		else ar[1] -= j;
	}
	cout << ar[0] << '\n' << ar[1] << '\n';
}