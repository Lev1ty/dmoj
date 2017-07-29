#include <iostream>
#include <array>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
unordered_map<char, char> m = {
	{'1','1'},
	{'2','*'},
	{'3','*'},
	{'4','*'},
	{'5','*'},
	{'6','9'},
	{'7','*'},
	{'8','8'},
	{'9','6'},
	{'0','0'}
};
array<bool, 32001> dp;
int l, r, ans;
int main() {
	for (int i = 1; i < dp.size(); i++) {
		string s = to_string(i);
		string t = "";
		for (auto &a : s) t += m[a];
		reverse(t.begin(), t.end());
		if (s == t) dp[i] = 1;
	}
	cin >> l >> r;
	for (int i = l; i <= r; i++)
		ans += dp[i];
	cout << ans;
}