#include <iostream>
#include <set>
using namespace std;
set<int> s;
int main() {
	for (int i = 0, j; i < 10; i++) {
		cin >> j;
		s.insert(j % 42);
	}
	cout << s.size();
}