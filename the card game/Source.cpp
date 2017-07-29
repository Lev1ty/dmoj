#include <iostream>
using namespace std;
int n, deny, underage, good;
int main() {
	cin >> n;
	for (int i = 0, j; i < n; i++) {
		cin >> j;
		if (j < 0) deny++;
		if (j >= 0 && j <= 14) underage++;
		if (j > 14) good++;
	}
	if (underage > 1) cout << underage << " people are too young to play.\n";
	else if (underage == 1) cout << underage << " person is too young to play.\n";
	if (good == 12) cout << "Time to play!";
	else if (good < 12) cout << "There are not enough people to play.";
	else cout << "There are too many people who want to play.";
}