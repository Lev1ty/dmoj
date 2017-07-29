#include <iostream>
using namespace std;
int a, b;
int main() {
	cin >> a >> b;
	if (a == 2 && b == 18) cout << "Special";
	else if ((a == 2 && b > 18) || a > 2) cout << "After";
	else cout << "Before";
}