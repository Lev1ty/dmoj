#include <iostream>
#include <array>
#include <string>
using namespace std;
int n; array<int, 2> ar; string s;
int main() {
	cin >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> s >> j;
		if (s == "North") ar[0] += j;
		else if (s == "South") ar[0] -= j;
		else if (s == "East") ar[1] += j;
		else if (s == "West") ar[1] -= j;
	}
	cout << ar[1] << ' ' << ar[0];
}