#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <array>
#include <utility>
using namespace std;
int n, m;
vector<int> input, lazy;
vector<array<int, 10>> tree;
array<int, 10> operator+(array<int, 10>& lhs, array<int, 10>& rhs)
{
	array<int, 10> re;
	for (int i = 0; i < 10; i++)
	{
		re[i] = lhs[i] + rhs[i];
	}
	return re;
}
void operator+=(array<int, 10>& lhs, int rhs)
{
	array<int, 10> re;
	for (int i = 0; i < 10; i++)
	{
		re[(i + rhs) % 10] = lhs[i];
	}
	lhs = re;
}
//inline array<int, 10>&& operator++(array<int, 10>& lhs)
//{
//	return lhs += 1;
//}
inline int mid(int a, int b) { return a - (a - b) / 2; }
int sum(array<int, 10>& ar)
{
	int re = 0;
	for (int i = 0; i < 10; i++)
	{
		re += i*ar[i];
	}
	return re;
}
void construct(int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (lo == hi)
	{
		tree[pos][input[lo]]++;
		return;
	}
	construct(lo, mid(lo, hi), (pos << 1) + 1);
	construct(mid(lo, hi) + 1, hi, (pos + 1) << 1);
	tree[pos] = tree[(pos << 1) + 1] + tree[(pos + 1) << 1];
}
int query(int qlo, int qhi, int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (lazy[pos])
	{
		tree[pos] += lazy[pos];
		if (lo != hi)
		{
			lazy[(pos << 1) + 1] += lazy[pos];
			lazy[(pos + 1) << 1] += lazy[pos];
		}
		lazy[pos] = 0;
	}
	if (lo > hi || hi<qlo || lo>qhi)
	{
		return 0;
	}
	if (lo >= qlo&&hi <= qhi)
	{
		return sum(tree[pos]);
	}
	return query(qlo, qhi, lo, mid(lo, hi), (pos << 1) + 1) + query(qlo, qhi, mid(lo, hi) + 1, hi, (pos + 1) << 1);
}
void modify(int qlo, int qhi, int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (lazy[pos])
	{
		tree[pos] += lazy[pos];
		if (lo != hi)
		{
			lazy[(pos << 1) + 1] += lazy[pos];
			lazy[(pos + 1) << 1] += lazy[pos];
		}
		lazy[pos] = 0;
	}
	if (lo > hi || hi<qlo || lo>qhi)
	{
		return;
	}
	if (lo >= qlo&&hi <= qhi)
	{
		tree[pos] += 1;
		if (lo != hi)
		{
			lazy[(pos << 1) + 1]++;
			lazy[(pos + 1) << 1]++;
		}
		return;
	}
	modify(qlo, qhi, lo, mid(lo, hi), (pos << 1) + 1);
	modify(qlo, qhi, mid(lo, hi) + 1, hi, (pos + 1) << 1);
	tree[pos] = tree[(pos << 1) + 1] + tree[(pos + 1) << 1];
}
int main()
{
	freopen("Text.txt", "r", stdin);
	cin >> n >> m;
	input.resize(n);
	for (int& i : input)
	{
		char c;
		cin >> c;
		i = c - '0';
	}
	{
		int treeSize = 1;
		for (; treeSize < input.size(); treeSize <<= 1);
		treeSize = (treeSize << 1) + 1;
		tree.resize(treeSize);
		lazy.resize(treeSize);
	}
	construct();
	for (int i = 0; i < m; i++)
	{
		int j, k;
		cin >> j >> k;
		j--;
		k--;
		cout << query(j, k) << '\n';
		modify(j, k);
	}
}