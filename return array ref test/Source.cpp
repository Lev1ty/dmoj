#include <iostream>
#include <array>
using namespace std;
array<int, 10>&& operator+(array<int, 10>& lhs, array<int, 10>& rhs)
{
	array<int, 10> re;
	for (int i = 0; i < 10; i++)
	{
		re[i] = lhs[i] + rhs[i];
	}
	return move(re);
}
int main() {
	array<int, 10> a = { 1,6,31,7,235,7,8,23,6,7 },
		b = { 8,4,67,142,7,142,37,4,15,78 };
	array<int, 10> c = a + b;
	for (int& i : c) cout << i << ' ';
	[](array<int, 10>& ar) {
		for (int& i : ar) cout << i << ' ';
	}(array<int, 10>{0});
}