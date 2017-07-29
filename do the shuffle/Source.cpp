#include <iostream>
#include <deque>
using namespace std;
deque<int> d; int b, n;
int main() {
	for (int i = 0; i < 5; i++) d.push_back(i);
	do {
		cin >> b >> n;
		if (b == 1) {
			for (int j = 0; j < n; j++) {
				int k = d.front();
				d.pop_front();
				d.push_back(k);
			}
		} else if (b == 2) {
			for (int j = 0; j < n; j++) {
				int k = d.back();
				d.pop_back();
				d.push_front(k);
			}
		} else if (b == 3) {
			for (int j = 0; j < n; j++) {
				int a = d.front();
				d.pop_front();
				int b = d.front();
				d.pop_front();
				d.push_front(a);
				d.push_front(b);
			}
		}
	} while (!(b == 4 && n == 1));
	for (int i = 0; i < d.size(); i++) {
		cout << char(d[i] + 'A') << ' ';
	}
}