#include <iostream>
using namespace std;
int base, ans, delta;
int main() {
	cin >> base >> ans;
	delta = ans - base;
	if (delta >= 1 && delta <= 20) cout << "You are speeding and your fine is $100.";
	else if (delta >= 21 && delta <= 30) cout << "You are speeding and your fine is $270.";
	else if (delta >= 31) cout << "You are speeding and your fine is $500.";
	else cout << "Congratulations, you are within the speed limit!";
}