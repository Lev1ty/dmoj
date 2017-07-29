#include <cstdio>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

constexpr int SIZE = 10000;

struct Interval {
	int *lo, *hi;
	int *min, *max, sum;
	void build(int *lo, int *hi) {
		this->lo = lo; this->hi = hi;
		max = max_element(lo, hi + 1);
		min = min_element(lo, hi + 1);
		sum = get_sum();
	}
	int get_sum(int init = 0) {
		for (int *i = lo; i != hi + 1; ++i)
			init += *i;
		return init;
	}
	void print() {
		printf("%d %d %d %d %d %d %d\n", lo, *lo, hi, *hi, *min, *max, sum);
	}
} mem[101], *aloc = mem;

int in[SIZE];

void decompose(int *lo, int *hi) {
	auto pt = aloc++;
	pt->build(lo, hi);
}
//0, 99, 100, 199

int main() {
	iota(in, in + SIZE, 1);
	for (int i = 0; i <= 900; i += 100)
		decompose(in + i, in + i + 99);
	for (Interval *i = mem; i != aloc; ++i)
		i->print();
}