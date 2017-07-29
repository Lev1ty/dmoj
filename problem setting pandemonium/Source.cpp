#include <iostream>
#include <set>
using namespace std;
int n; set<int> st;
int main() {
	cin >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		st.insert(j);
	}
	cout << st.size();
}