#include <iostream>
#include <vector>
using namespace std;
struct Node {
	int val, lazy, num, key;
	Node *left, *right, *parent;
	void print() {
		cout << key << ' ' << this << ' ' << val << ' ' << lazy << ' ' << num
			<< ' ' << left << ' ' << right << ' ' << parent << '\n';
	}
};
vector<int> input = { 1,2,3,4,5 };
Node *root = new Node();
auto construct(const vector<int> &v, int l = 0, int r = input.size() - 1, Node *cur = root) {
	if (l == r)
	{
		cur->val = v[l];
		cur->num = 1;
		return;
	}
	auto m = l - (l - r) / 2;
	cur->left = new Node();
	cur->right = new Node();
	cur->left->parent = cur;
	cur->right->parent = cur;
	cur->left->key = cur->key * 2 + 1;
	cur->right->key = cur->key * 2 + 2;
	construct(v, l, m, cur->left);
	construct(v, m + 1, r, cur->right);
	cur->num = cur->left->num + cur->right->num;
	cur->val = cur->left->val + cur->right->val;
}
auto modify(int delta, int ml, int mr, int l = 0, int r = input.size() - 1, Node *cur = root) {
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
	auto m = l - (l - r) / 2;
	modify(delta, ml, mr, l, m, cur->left);
	modify(delta, ml, mr, m + 1, r, cur->right);
	cur->val = cur->left->val + cur->right->val;
}
auto query(int ql, int qr, int l = 0, int r = input.size() - 1, Node *cur = root) {
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
	if (l > r || l > qr || r < ql)
	{
		return 0;
	}
	if (l >= ql&&r <= qr)
	{
		return cur->val;
	}
	auto m = l - (l - r) / 2;
	return query(ql, qr, l, m, cur->left) + query(ql, qr, m + 1, r, cur->right);
}
void traverse(Node *cur = root) {
	cur->print();
	if (cur->left)
	{
		traverse(cur->left);
	}
	if (cur->right)
	{
		traverse(cur->right);
	}
}
int main() {
	root->key = 0;
	construct(input);
	traverse();
	cout << query(0, 0) << '\n';
	modify(-1, 0, 1);
	cout << query(0, 4) << '\n';
	traverse();
	cout << query(0, 0) << '\n';
	traverse();
}