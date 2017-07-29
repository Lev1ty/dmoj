#include <iostream>
#include <string>
using namespace std;
string v, n;
int main() {
	getline(cin, v);
	getline(cin, n);
	cout << v << "-tu " << (n.back() == 's' ? "les" : n.back() == 'e' ? "la" : "le") << " " << n << " ?";
}