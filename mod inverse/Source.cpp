#include <iostream>
using namespace std;
int x, m;
int main() {
	cin >> x >> m;
	for (int n = 1; n < 100; n++)
		if ((x*n - 1) % m == 0) {
			cout << n;
			return 0;
		}
	cout << "No such integer exists.";
}