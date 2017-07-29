#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

unordered_map<string, string> rev = { {"R","LEFT"},{"L","RIGHT"} };
vector<string> v; string s;

int main() {
	freopen("Text.txt", "r", stdin);
	while (s != "SCHOOL") {
		getline(cin, s);
		v.push_back(s);
	}
	for (int i = v.size() - 1; i >= 2;) {
		cout << "Turn " << rev[v[--i]];
		cout << " onto " << v[--i] << " street.\n";
	}
	cout << "Turn " << rev[v[0]] << " into your HOME.";
}