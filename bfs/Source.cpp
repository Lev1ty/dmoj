#include <iostream>
using namespace std;
int n;
int main() {
	for (int i = 0, j; i < 5; i++) {
		cin >> j;
		if (i == 0) n += j * 5;
		else if (i == 1) n += j * 10;
		else if (i == 2) n += j * 25;
		else if (i == 3) n += j * 100;
		else if (i == 4) n += j * 200;
	}
	cout << n;
}