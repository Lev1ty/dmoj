#include <iostream>
using namespace std;
int n, k, ans;
int main() {
	cin >> n >> k;
	while (k) { ans += n*pow(10, k); k--; }
	ans += n;
	cout << ans;
}