#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;
using ll = long long;

#define MAX 1500

struct ray {
	ll dx, dy;
	int quadrant;

	void rotate90() {
		ll tmp = dx; dx = dy; dy = -tmp;
		quadrant = (quadrant + 1) % 4;
	}
};

bool angle_lt(const ray &A, const ray &B) { return A.dy*B.dx < B.dy*A.dx; }
bool angle_eq(const ray &A, const ray &B) { return A.dy*B.dx == B.dy*A.dx; }

int n, x[MAX], y[MAX];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) scanf("%d%d", &x[i], &y[i]);

	int ans = 0;

	for (int i = 0; i < n; ++i) {

		vector<ray> rays;

		for (int j = 0; j < n; ++j) {
			if (i == j) continue;

			ray R;
			R.quadrant = 0;
			R.dx = x[j] - x[i];
			R.dy = y[j] - y[i];

			while (R.dx <= 0 || R.dy < 0) R.rotate90();

			rays.push_back(R);
		}

		sort(rays.begin(), rays.end(), angle_lt);

		int count[4];
		for (int j = 0, k; j < rays.size(); j = k) {

			count[0] = count[1] = count[2] = count[3] = 0;

			for (k = j; k < rays.size() && angle_eq(rays[j], rays[k]); ++k)
				++count[rays[k].quadrant];

			ans += count[0] * count[1] + count[1] * count[2] + count[2] * count[3] + count[3] * count[0];
		}
	}

	printf("%d\n", ans);

	return 0;
}
//TODO: understand this solution