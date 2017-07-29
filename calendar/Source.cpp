#include <iostream>
using namespace std;
int a, b;
int main() {
	cin >> a >> b;
	cout << "Sun Mon Tue Wed Thr Fri Sat\n";
	int i = 1;
	for (; i <= a - 1; i++) cout << "    ";
	for (int j = 1; j <= b; j++, i++) {
		if (j >= 1 && j <= 9) cout << "  ";
		else cout << " ";
		cout << j;
		if (i % 7 == 0) cout << '\n';
		else cout << ' ';
	}
}