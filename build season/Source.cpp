#include <iostream>
using namespace std;
int n, w, h;
int main() {
	cin >> n >> w;
	if (w) {
		cin >> h;
		cout << "It takes " << n * 6 + (7 - w)*h << " hours for Team 610 build a robot.";
	} else {
		cout << "It takes " << n * 6 << " hours for Team 610 build a robot.";
	}
}