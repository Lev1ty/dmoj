#include <iostream>
#include <algorithm>
using namespace std;
int n, ans;
int main() {
	cin >> n;
	if (n <= 5) cout << n / 2 + 1;
	else if (n == 6) cout << 3;
	else if (n == 7) cout << 2;
	else if (n == 8) cout << 2;
	else if (n == 9) cout << 1;
	else if (n == 10) cout << 1;
}