#include <iostream>
#include <array>
using namespace std;
array<array<int, 3>, 3> ar;
int get() {
	char c; cin >> c; int n = 0;
	n += 10 * (c - '0');
	cin >> c;
	n += c - '0';
	return n;
}
int main() {
	ar[0][0] = get(); cin.ignore(1);
	ar[0][1] = get(); cin.ignore(1);
	ar[0][2] = get();
	ar[1][0] = get(); cin.ignore(1);
	ar[1][1] = get(); cin.ignore(1);
	ar[1][2] = get();
	for (int i = 0; i < 3; i++) {
		ar[2][i] = ar[1][i] - ar[0][i];
	}
	cout << ar[2][0] * 3600 + ar[2][1] * 60 + ar[2][2];
}