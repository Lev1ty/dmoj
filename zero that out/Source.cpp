#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int n; vector<int> v;
int main() {
	cin >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		if (j == 0) {
			v.pop_back();
		} else {
			v.push_back(j);
		}
	}
	cout << accumulate(v.begin(), v.end(), 0);
}