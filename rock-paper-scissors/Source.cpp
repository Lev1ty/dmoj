#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;
int n; array<vector<string>, 2> ar; array<int, 2> ans;
int main() {
	cin >> n;
	for (auto &a : ar) a.resize(n);
	for (auto &a : ar)
		for (auto &b : a)
			cin >> b;
	for (int i = 0; i < n; i++) {
		if (ar[0][i] == ar[1][i]) continue;
		if (ar[0][i] == "rock"&&ar[1][i] == "scissors" || ar[0][i] == "scissors"&&ar[1][i] == "paper" || ar[0][i] == "paper"&&ar[1][i] == "rock") ans[0]++;
		if (ar[1][i] == "rock"&&ar[0][i] == "scissors" || ar[1][i] == "scissors"&&ar[0][i] == "paper" || ar[1][i] == "paper"&&ar[0][i] == "rock") ans[1]++;
	}
	for (auto &a : ans) cout << a << ' ';
}