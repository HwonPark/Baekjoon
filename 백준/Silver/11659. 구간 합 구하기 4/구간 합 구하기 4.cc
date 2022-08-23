//#define _USE_MATH_DEFINES
#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int m, n, i, j;
	int num[100000];

	cin >> n >> m;
	for (int k = 0; k < n; k++) {
		cin >> num[k];
		if (k == 0) {
			num[k] = num[k];
		}
		else {
			num[k] += num[k - 1];
		}
	}
	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		if (i > 1) {
			cout << num[j - 1] - num[i - 2] << "\n";
		}
		else {
			cout << num[j - 1] << "\n";
		}
	}
}