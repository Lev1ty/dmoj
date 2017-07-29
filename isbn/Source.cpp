#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
using namespace std;
int base = 91; array<int, 3> ar;
int main() {
	for (auto &a : ar) cin >> a;
	ar[1] *= 3;
	for (auto &a : ar) base += a;
	cout << "The 1-3-sum is " << base;
}