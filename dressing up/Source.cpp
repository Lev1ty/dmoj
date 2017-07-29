#include <iostream>
using namespace std;
int n;
int main() {
	cin >> n;
	for (int i = 0; i <= (n - 1) / 2; i++) {
		int j = 0;
		for (; j < 1 + 2 * i; j++) cout << '*';
		for (; j < 2 * n - (1 + 2 * i); j++) cout << ' ';
		for (; j < 2 * n; j++) cout << '*';
		cout << '\n';
	}
	for (int i = (n - 1) / 2 - 1; i >= 0; i--) {
		int j = 0;
		for (; j < 1 + 2 * i; j++) cout << '*';
		for (; j < 2 * n - (1 + 2 * i); j++) cout << ' ';
		for (; j < 2 * n; j++) cout << '*';
		cout << '\n';
	}
}