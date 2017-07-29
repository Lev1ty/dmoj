//#include <iostream>
//#include <vector>
//#include <utility>
//#include <algorithm>
//
//#define MAX 1000000000ll
//
//using namespace std;
//using ll = long long;
//using pll = pair<ll, ll>;
//
//vector<pll> x, y;
//ll N, ans;
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		int j, k;
//		cin >> j >> k;
//		x.emplace_back(j, k);
//		y.emplace_back(k, j);
//	}
//	sort(x.begin(), x.end());
//	sort(y.begin(), y.end());
//	for (int i = 0; i < N; ++i) {
//		pll p = x[i];
//		ll left, right, up, down;
//		down = upper_bound(x.begin(), x.end(), make_pair(p.first, p.second - 1)) - lower_bound(x.begin(), x.end(), make_pair(p.first, -MAX));
//		up = upper_bound(x.begin(), x.end(), make_pair(p.first, MAX)) - lower_bound(x.begin(), x.end(), make_pair(p.first, p.second + 1));
//		left = upper_bound(y.begin(), y.end(), make_pair(p.second, p.first - 1)) - lower_bound(y.begin(), y.end(), make_pair(p.second, -MAX));
//		right = upper_bound(y.begin(), y.end(), make_pair(p.second, MAX)) - lower_bound(y.begin(), y.end(), make_pair(p.second, p.first + 1));
//		ans += down*up*left*right * 2;
//	}
//	cout << ans;
//}