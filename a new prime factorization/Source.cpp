#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
array<bool, 100000> ar; vector<int> v, p; int n;
int main() {
	for (int i = 2; i < ar.size(); i++)
		if (!ar[i]) {
			p.push_back(i);
			for (int j = i*i; j < ar.size(); j += i)
				ar[j] = 1;
		}
	sort(p.begin(), p.end());
	cin >> n;
	while (n > 1) {
		for (auto &a : p)
			if (n%a == 0) {
				n /= a;
				v.push_back(a);
				break;
			}
	}
	sort(v.begin(), v.end());
	for (auto &a : v) cout << a << '\n';
}