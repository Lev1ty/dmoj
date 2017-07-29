#include <iostream>
using namespace std;
long long a, b;
int main() {
	cin >> a >> b;
	cout << (a + 1000000000000 * b) % b;
}