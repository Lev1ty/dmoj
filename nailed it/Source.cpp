#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>

using namespace std;
using ll = long long;

constexpr ll MAX_LEN = 2000;

ll N, ans[2];
ll mem[MAX_LEN + 1], sum[(MAX_LEN + 1) << 1];

int main() {
	scanf("%lld", &N);
	for (ll i = 0, j; i < N; ++i) {
		scanf("%lld", &j);
		++mem[j];
	}
	for (ll i = 1; i <= MAX_LEN; ++i) {
		if (mem[i]) {
			for (ll j = i; j <= MAX_LEN; ++j) {
				if (i == j) {
					sum[i << 1] += mem[i] >> 1;
				} else if (mem[j]) {
					sum[i + j] += min(mem[i], mem[j]);
				}
			}
		}
	}
	for (ll i = 1; i <= MAX_LEN << 1; ++i) {
		if (sum[i] > ans[0]) {
			ans[0] = sum[i];
			ans[1] = 1;
		} else if (sum[i] == ans[0]) {
			++ans[1];
		}
	}
	printf("%lld %lld", ans[0], ans[1]);
}