#include <iostream>
#include <vector>
using namespace std;
int r, c, zr, zc; vector<vector<char>> v;
int main() {
	cin >> r >> c >> zr >> zc;
	v.resize(r, vector<char>(c));
	for (auto &a : v)
		for (auto &b : a)
			cin >> b;
	for (int i = 0; i / zr < r; i++) {
		for (int j = 0; j / zc < c; j++) {
			cout << v[i / zr][j / zc];
		}
		cout << '\n';
	}
}