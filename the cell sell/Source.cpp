#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
using namespace std;
array<int, 3> input, A, B; int a, b; double da, db;
int main() {
	for (auto &a : input) cin >> a;
	A[0] = max(0, (input[0] - 100) * 25);
	A[1] = 15 * input[1];
	A[2] = 20 * input[2];
	B[0] = max(0, (input[0] - 250) * 45);
	B[1] = 35 * input[1];
	B[2] = 25 * input[2];
	a = accumulate(A.begin(), A.end(), 0);
	b = accumulate(B.begin(), B.end(), 0);
	da = a / 100.0; db = b / 100.0;
	cout << "Plan A costs " << da << '\n'
		<< "Plan B costs " << db << '\n'
		<< (a == b ? "Plan A and B are the same price." : a > b ? "Plan B is cheapest." : "Plan A is cheapest.") << '\n';
}