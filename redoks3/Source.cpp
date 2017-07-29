#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

#define MAX 250000

struct Interval {
	int lo, hi;
	int freq[10];
	int lazy;
	Interval *left, *right;

	Interval() { lazy = 0; memset(freq, 0, sizeof freq); }

	void rotate(int del) {
		static int tmp[10];
		for (int i = 0; i < 10; ++i) tmp[i] = freq[i];
		for (int i = 0; i < 10; ++i) freq[(i + del) % 10] = tmp[i];
		lazy = (lazy + del) % 10;
	}

	void split() {
		left->rotate(lazy);
		right->rotate(lazy);
		lazy = 0;
	}

	void join() {
		for (int i = 0; i < 10; ++i)
			freq[i] = left->freq[i] + right->freq[i];
	}
} mem[MAX << 1], *aloc = mem;

int n;
char in[MAX + 1];

void tree_build(Interval *x) {
	if (x->lo == x->hi) {
		x->freq[in[x->lo] - '0'] = 1;
	} else {
		int m = x->lo - (x->lo - x->hi) / 2;

		x->left = aloc++;
		x->left->lo = x->lo;
		x->left->hi = m;
		tree_build(x->left);

		x->right = aloc++;
		x->right->lo = m + 1;
		x->right->hi = x->hi;
		tree_build(x->right);

		x->join();
	}
}

int A, B;
int ret;

void tree_query(Interval *x) {
	if (x->lo > B || x->hi < A) return;
	if (A <= x->lo&&x->hi <= B) {
		for (int i = 0; i < 10; ++i) ret += i*x->freq[i];
		x->rotate(1);
	} else {
		x->split();
		tree_query(x->left);
		tree_query(x->right);
		x->join();
	}
}

int main() {
	int n, m;

	scanf("%d%d ", &n, &m);
	gets(in);

	Interval *root = aloc++;
	root->lo = 0;
	root->hi = n - 1;

	tree_build(root);

	for (int i = 0; i < m; ++i) {
		scanf("%d%d", &A, &B); --A; --B;

		ret = 0;
		tree_query(root);
		printf("%d\n", ret);
	}
}