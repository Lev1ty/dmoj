#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int a, b, c;
int main() {
	cin >> a >> b >> c;
	if (a == b&&b == c&&c == 60) cout << "Equilateral";
	else if ((a == b || a == c || b == c) && a + b + c == 180) cout << "Isosceles";
	else if (a + b + c == 180) cout << "Scalene";
	else cout << "Error";
}