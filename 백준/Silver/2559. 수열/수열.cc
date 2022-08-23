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


	int n, k;
	int temperature[100000];
	int sum[100000];
	int max = -500;

	cin >> n >> k;

	cin >> temperature[0];
	for (int i = 1; i < n; i++) {
		cin >> temperature[i];
		temperature[i] += temperature[i - 1];
	}

	sum[0] = temperature[k-1];
	max = sum[0];
	for (int i = 1; i < n - k + 1; i++) {
		sum[i] = temperature[i + k - 1] - temperature[i - 1];
		if (max < sum[i]) {
			max = sum[i];
		}
	}

	cout << max;
}