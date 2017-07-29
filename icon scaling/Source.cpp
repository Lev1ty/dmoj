#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
using namespace std;
int k; array<array<char, 3>, 3> ar = { {{'*','x','*'},{' ','x','x'},{'*',' ','*'}} };
int main() {
	freopen("Text.txt", "r", stdin);
	cin >> k;
	for (int i = 0; i / k < 3; i++) {
		for (int j = 0; j / k < 3; j++)
			cout << ar[i / k][j / k];
		cout << '\n';
	}
}