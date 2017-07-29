#include <iostream>
#include <string>
using namespace std;
int n, m; string s;
int main() {
	cin >> n >> s >> m;
	if (s == "Infront") cout << n - m;
	else cout << n + m;
}