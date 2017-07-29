#include <iostream>
using namespace std;
double vin, rf, rg;
int main() {
	cin >> vin >> rf >> rg;
	cout << vin*(1 + rf / rg);
}