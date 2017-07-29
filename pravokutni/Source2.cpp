//#define _CRT_SECURE_NO_WARNINGS
//
//#include <cstdio>
//
//using namespace std;
//
//int ar[1501][2], n, (*aloc)[2] = ar, ans;
//
//int main() {
//	freopen("Text.txt", "r", stdin);
//	scanf("%d", &n);
//	for (; n--; ++aloc)
//		scanf("%d%d", aloc[0], aloc[1]);
//	for (int(*pt1)[2] = ar; pt1 != aloc; ++pt1)
//		for (int(*pt2)[2] = ar; pt2 != aloc; ++pt2)
//			for (int(*pt3)[2] = ar; pt3 != aloc; ++pt3)
//				ans += 1.0*(*pt1[1] - *pt2[1]) / (*pt1[0] - *pt2[0]) == -1.0*(*pt2[0] - *pt3[0]) / (*pt2[1] - *pt3[1]);
//	printf("%d", ans/2);
//}