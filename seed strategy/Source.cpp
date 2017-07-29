#include <iostream>
using namespace std;
int k; double n;
int main() {
	cin >> n >> k;
	for (int i = 0, j; i < k; i++) {
		cin >> j;
		if (j == 1) n -= .5;
		else if (j == 2) n--;
		else n -= 5;
	}
	cout << (n > 0 ? "Continue" : "Return");
}