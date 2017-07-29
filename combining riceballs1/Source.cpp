#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
#include <numeric>

using namespace std;
using ll = long long;

constexpr ll SIZE = 500;

ll N, ans, ar[SIZE], ps[SIZE];
bool dp[SIZE][SIZE], vis[SIZE][SIZE];

inline ll psum(ll i, ll j) {
	return i == 0 && j == 0 ? ar[0] : ps[j] - ps[i - 1];
}

bool solve(ll lo, ll hi) {
	if (vis[lo][hi]) return dp[lo][hi];
	vis[lo][hi] = 1;
	if (lo >= hi || dp[lo][hi]) {
		dp[lo][hi] = 1;
		return 1;
	}
	solve(lo, hi - 1);
	solve(lo + 1, hi);
	ll i = lo, j = hi;
	while (i <= j&&i <= hi&&j >= lo) {
		solve(i + 1, j - 1);
		ll lsum = psum(lo, i), hsum = psum(j, hi);
		if (lsum == hsum&&solve(i + 1, j - 1) && solve(lo, i) && solve(j, hi)) {
			dp[lo][hi] = 1;
			return 1;
		}
		if (lsum >= hsum) --j;
		else ++i;
	}
	return 0;
}

//if (psum(lo, i) == psum(j, hi)) {
//	dp[lo][hi] = max(dp[lo][hi], solve(lo, i) && solve(i + 1, j - 1) && solve(j, hi));
//	if (dp[lo][hi]) {
//		return 1;
//	}
//}

int main() {
	freopen("Text.txt", "r", stdin);
	scanf("%lld", &N);
	for (ll i = 0; i < N; ++i) {
		scanf("%lld", &ar[i]);
	}
	partial_sum(ar, ar + N, ps);
	solve(0, N - 1);
	for (ll i = 0; i < N; ++i) {
		for (ll j = i; j < N; ++j) {
			if (dp[i][j]) ans = max(ans, psum(i, j));
		}
	}
	printf("%lld", ans);
}