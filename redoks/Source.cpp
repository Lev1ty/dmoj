#include <iostream>
#include <vector>
using namespace std;
struct Node {
	int val, lazy, num;
	Node *left, *right;
};
Node *root = new Node();
int n, m;
vector<int> input;
void construct(const vector<int> &v, int l = 0, int r = input.size() - 1, Node *cur = root) {
	if (l == r)
	{
		cur->val = v[l];
		cur->num = 1;
		return;
	}
	int m = l - (l - r) / 2;
	cur->left = new Node();
	cur->right = new Node();
	construct(v, l, m, cur->left);
	construct(v, m + 1, r, cur->right);
	cur->num = cur->left->num + cur->right->num;
	cur->val = cur->left->val + cur->right->val;
}
void modify(int delta, int ml, int mr, int l = 0, int r = input.size() - 1, Node *cur = root) {
	if (cur->lazy)
	{
		cur->val += cur->lazy*cur->num;
		if (l != r)
		{
			cur->left->lazy += cur->lazy;
			cur->right->lazy += cur->lazy;
		}
		cur->lazy = 0;
	}
	if (l > r || l > mr || r < ml)
	{
		return;
	}
	if (l >= ml&&r <= mr)
	{
		cur->val += delta*cur->num;
		if (l != r)
		{
			cur->left->lazy += delta;
			cur->right->lazy += delta;
		}
		return;
	}
	int m = l - (l - r) / 2;
	modify(delta, ml, mr, l, m, cur->left);
	modify(delta, ml, mr, m + 1, r, cur->right);
	cur->val = cur->left->val + cur->right->val;
}
int query(int ql, int qr, int l = 0, int r = input.size() - 1, Node *cur = root) {
	if (cur->lazy)
	{
		cur->val += cur->lazy*cur->num;
		if (l != r)
		{
			cur->left->lazy += cur->lazy;
			cur->right->lazy += cur->lazy;
		}
		cur->lazy = 0;
	}
	if (l > r || r < ql || l > qr)
	{
		return 0;
	}
	if (l >= ql&&r <= qr)
	{
		return cur->val;
	}
	int m = l - (l - r) / 2;
	return query(ql, qr, l, m, cur->left) + query(ql, qr, m + 1, r, cur->right);
}
int main() {
	cin >> n >> m;
	input.resize(n);
	for (int &a : input) {
		char c;
		cin >> c;
		a = c - '0';
	}
	construct(input);
	for (int i = 0; i < m; i++)
	{
		int j, k;
		cin >> j >> k;
		j--, k--;
		cout << query(j, k) << '\n';
		modify(1, j, k);
	}
}