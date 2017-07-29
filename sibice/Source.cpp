#include <iostream>
#include <cmath>
using namespace std;
int n, w, h, hyp;
int main() {
	cin >> n >> w >> h;
	hyp = sqrt(pow(w, 2) + pow(h, 2));
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		cout << (hyp >= j ? "DA" : "NE") << '\n';
	}
}