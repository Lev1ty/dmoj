#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
unordered_map<string, string> m = {
	{"CU","see you"},
	{":-)","I'm happy"},
	{":-(","I'm sad"},
	{";-)","wink"},
	{":-P","stick out my tongue"},
	{"-.-","sleepy"},
	{"TA","totally awesome"},
	{"CCC","Canadian Computing Competition"},
	{"CUZ","because"},
	{"TY","thank-you"},
	{"YW","you're welcome"},
	{"TTYL","talk to you later"}
}; string s;
int main() {
	do {
		getline(cin, s);
		cout << (m.count(s) ? m[s] : s) << '\n';
	} while (s != "TTYL");
}