#include <iostream>
#include <deque>
#include <string>
using namespace std;
string s; deque<int> d = { 1,2,3 };
int main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			int a = d.front(); d.pop_front();
			int b = d.front(); d.pop_front();
			d.push_front(a);
			d.push_front(b);
		} else if (s[i] == 'B') {
			int a = d.back(); d.pop_back();
			int b = d.back(); d.pop_back();
			d.push_back(a);
			d.push_back(b);
		} else {
			int a = d.front();
			int b = d.back();
			d.pop_back(); d.pop_front();
			d.push_back(a); d.push_front(b);
		}
	}
	if (d.back() == 1) cout << 3;
	else if (d.front() == 1) cout << 1;
	else cout << 2;
}