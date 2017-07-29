#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
array<array<int, 8>, 2> ar;
int main() {
	for (int i = 0; i < 8; i++) {
		cin >> ar[0][i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			ar[1][i] += ar[0][(i + j) % 8];
		}
	}
	cout << *max_element(ar[1].begin(), ar[1].end());
}