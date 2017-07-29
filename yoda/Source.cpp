#include <iostream>
#include <string>
using namespace std;
string s, a, b, t; int key; char mark;
int main() {
	getline(cin, s);
	if (!s.empty()) mark = s.back();
	a = s.substr(s.find(','));
	if (!a.empty()) a.pop_back();
	while (!a.empty() && !isalpha(a.front())) a.erase(a.begin());
	if (!a.empty() && a.front() >= 'a'&&a.front() <= 'z') a.front() -= 'a' - 'A';
	b = s.substr(0, s.find(','));
	if (!b.empty() && b.front() >= 'A'&&b.front() <= 'Z') b.front() += 'a' - 'A';
	t = a + ' ' + b + mark;
	while (!t.empty() && !isalpha(t.front())) t.erase(t.begin());
	if (!t.empty() && t.front() >= 'a'&&t.front() <= 'z') t.front() -= 'a' - 'A';
	if (t == "Hello !") t = "Hello!";
	cout << t;
}