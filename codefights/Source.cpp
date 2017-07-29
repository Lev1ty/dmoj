#include <iostream>
#include <cmath>
using namespace std;
int a, n;
int main() {
	cin >> a >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		if (abs(a - j) > 100) cout << "go away! 3:<\n";
		else cout << "fite me! >:3\n";
	}
}