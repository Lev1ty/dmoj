#include <iostream>
#include <algorithm>
using namespace std;
int a, b, ma, mi;
int main() {
	cin >> a >> b;
	ma = min(9, max(a, b));
	mi = min(9, min(a, b));
	if (ma - (10 - mi) + 1 > 1 || ma - (10 - mi) + 1 < 1)
		cout << "There are " << max(0, ma - (10 - mi) + 1) << " ways to get the sum 10.";
	else cout << "There is 1 way to get the sum 10.";
}