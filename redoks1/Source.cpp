#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector<int> input, tree;
void construct(int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (hi == lo)
	{
		tree[pos] = input[lo];
		return;
	}
	int m = lo - (lo - hi) / 2;
	construct(lo, m, (pos << 1) + 1);
	construct(m + 1, hi, (pos + 1) << 1);
	tree[pos] = tree[(pos << 1) + 1] + tree[(pos + 1) << 1];
}
int query(int qlo, int qhi, int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (lo > hi || hi<qlo || lo>qhi)
	{
		return 0;
	}
	if (lo >= qlo&&hi <= qhi)
	{
		return tree[pos];
	}
	int m = lo - (lo - hi) / 2;
	return query(qlo, qhi, lo, m, (pos << 1) + 1) + query(qlo, qhi, m + 1, hi, (pos + 1) << 1);
}
void modify(int qlo, int qhi, int lo = 0, int hi = input.size() - 1, int pos = 0)
{
	if (lo > hi || hi<qlo || lo>qhi)
	{
		return;
	}
	if (lo >= qlo&&hi <= qhi&&lo == hi)
	{
		tree[pos]++;
		tree[pos] %= 10;
		return;
	}
	int m = lo - (lo - hi) / 2;
	modify(qlo, qhi, lo, m, (pos << 1) + 1);
	modify(qlo, qhi, m + 1, hi, (pos + 1) << 1);
	tree[pos] = tree[(pos << 1) + 1] + tree[(pos + 1) << 1];
}
int main()
{
	freopen("Text.txt", "r", stdin);
	scanf("%d%d", &n, &m);
	input.resize(n);
	cin.ignore(1);
	for (int& i : input)
	{
		char c = getchar();
		i = c - '0';
	}
	{
		int tsize = 1;
		for (; tsize < input.size(); tsize <<= 1);
		tree.resize((tsize << 1) - 1);
	}
	construct();
	for (int i = 0; i < m; i++)
	{
		int j, k;
		scanf("%d%d", &j, &k);
		printf("%d\n", query(j - 1, k - 1));
		modify(j - 1, k - 1);
	}
}