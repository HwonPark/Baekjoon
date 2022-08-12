#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	// 같은 원 (단 r이 모두 0일경우 1)
	// 내접
	// 외접
	// 포함
	// 완전 떨어짐
	// 두점

	int t;
	int k = 0;
	int x1, y1, r1, x2, y2, r2;
	int dis; // 두좌표사이의 거리
	int rdis1, rdis2;

	cin >> t;

	while (k != t) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		rdis1 = pow(r1 + r2, 2);
		rdis2 = pow(r1 - r2, 2);

		if (dis == 0 && r1 == 0 && r2 == 0) {
			cout << "1" << "\n";
		}
		else if (dis == 0 && r1 == r2) {
			cout << "-1" << "\n";
		}
		else if (dis == rdis2 || dis == rdis1) {
			cout << "1" << "\n";
		}

		else if (dis > rdis1 || dis < rdis2) {
			cout << "0" << "\n";
		}
		else {
			cout << "2" << "\n";
		}
		k++;
	}

}