#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
ll a, b, x, lcm;
ll gcd(ll u, ll v) { return v == 0 ? u : gcd(v, u%v); }
int main() {
	cin >> a >> b >> x;
	lcm = a*b / gcd(a, b);
	cout << (x - 1) / lcm + 1;
}