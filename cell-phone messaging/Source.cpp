#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main() {
	while (getline(cin, s) && s != "halt") {
		int ans = s.size();
		for (int i = 0; i < s.size(); i++) {
			switch (s[i]) {
			case 'c':
				ans++;
			case 'b':
				ans++;
			case 'a':
				if (i > 0 && (s[i - 1] >= 'a'&&s[i - 1] <= 'c')) ans += 2;
				break;
			case 'f':
				ans++;
			case 'e':
				ans++;
			case 'd':
				if (i > 0 && (s[i - 1] >= 'd'&&s[i - 1] <= 'f')) ans += 2;
				break;
			case 'i':
				ans++;
			case 'h':
				ans++;
			case 'g':
				if (i > 0 && (s[i - 1] >= 'g'&&s[i - 1] <= 'i')) ans += 2;
				break;
			case 'l':
				ans++;
			case 'k':
				ans++;
			case 'j':
				if (i > 0 && (s[i - 1] >= 'k'&&s[i - 1] <= 'l')) ans += 2;
				break;
			case 'o':
				ans++;
			case 'n':
				ans++;
			case 'm':
				if (i > 0 && (s[i - 1] >= 'm'&&s[i - 1] <= 'o')) ans += 2;
				break;
			case 's':
				ans++;
			case 'r':
				ans++;
			case 'q':
				ans++;
			case 'p':
				if (i > 0 && (s[i - 1] >= 'p'&&s[i - 1] <= 's')) ans += 2;
				break;
			case 'v':
				ans++;
			case 'u':
				ans++;
			case 't':
				if (i > 0 && (s[i - 1] >= 't'&&s[i - 1] <= 'v')) ans += 2;
				break;
			case 'z':
				ans++;
			case 'y':
				ans++;
			case 'x':
				ans++;
			case 'w':
				if (i > 0 && (s[i - 1] >= 'w'&&s[i - 1] <= 'z')) ans += 2;
				break;
			}
		}
		cout << ans << '\n';
	}
}