#include <iostream>
#include <cmath>
using namespace std;
double w, h, ans;
int main() {
	cin >> w >> h;
	ans = w / pow(h, 2);
	if (ans < 18.5) cout << "Underweight";
	else if (ans <= 25.0) cout << "Normal weight";
	else cout << "Overweight";
}