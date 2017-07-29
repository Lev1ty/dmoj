#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

ll N, ans, in[400], dp[400][400];

bool combine(int u, int v) { return u == v ? 1 : dp[u][v] != -1; }

bool two(int u, int v) {
	for (int j = u + 1, i; j <= v; ++j) {
		i = j - 1;
		if (!combine(u, i) || !combine(j, v) || dp[u][i] != dp[j][v]) continue;
		dp[u][v] = dp[u][i] + dp[j][v];
		return 1;
	}
	return 0;
}

void search_range_for_three_blocks(int firstStartIndex, int lastEndIndex)
{
	for (int middleStartIndex = firstStartIndex + 1; middleStartIndex < lastEndIndex; middleStartIndex++)
	{
		// Define the end of the first block
		int firstEndIndex = middleStartIndex - 1;

		// Skip first range if it cannot be combined
		if (combine(firstStartIndex, firstEndIndex) == false)
			continue;

		// We need to know the starting range count
		int firstCount = dp[firstStartIndex][firstEndIndex];

		for (int lastStartIndex = middleStartIndex + 1; lastStartIndex <= lastEndIndex; lastStartIndex++)
		{
			int middleEndIndex = lastStartIndex - 1;
			if (combine(middleStartIndex, middleEndIndex) == false)
				continue;
			if (combine(lastStartIndex, lastEndIndex) == false)
				continue;
			int lastCount = dp[lastStartIndex][lastEndIndex];
			if (firstCount != lastCount)
				continue;
			int middleCount = dp[middleStartIndex][middleEndIndex];
			int rangeCount = firstCount + middleCount + lastCount;
			dp[firstStartIndex][lastEndIndex] = rangeCount;
			return;
		}
	}
}

int main() {
	freopen("Text.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> in[i];
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j) {
				dp[i][j] = in[i];
			} else {
				dp[i][j] = -1;
			}
		}
	}
	for (int range = 2; range <= N; range++)
	{
		int maxStart = N - range + 1;
		for (int firstStartIndex = 0; firstStartIndex<maxStart; firstStartIndex++)
		{
			int lastEndIndex = firstStartIndex + range - 1;
			bool found = two(firstStartIndex, lastEndIndex);
			if (found) continue;
			if (range > 2)
				search_range_for_three_blocks(firstStartIndex, lastEndIndex);
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j) {
			ans = max(ans, dp[i][j]);
		}
	}
	cout << ans;
}