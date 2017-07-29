#include <iostream>
using namespace std;
int n, t, sum;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		sum = 0;
		for (int j = 0, k; j < t; j++) {
			cin >> k;
			sum += k;
		}
		if (sum == 0) cout << "Weekend\n";
		else cout << "Day " << i + 1 << ": " << sum << '\n';
	}
}