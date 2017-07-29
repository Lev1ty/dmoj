#include <iostream>
#include <cmath>
using namespace std;
int r;
int main() {
	while (cin >> r&&r) {
		//cin >> r;
		cout << 1 + 4 * r + 4 * []() {int s = 0; for (int i = 1; i <= r; i++) s += sqrt(pow(r, 2) - pow(i, 2)); return s; }() << '\n';;
	}
}