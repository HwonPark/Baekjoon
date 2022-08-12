#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	// 행성이 한 점만 포함하는 경우 그 행성을 반드시 지나가야함

	int t, n;
	int k = 0;
	int x1, y1, x2, y2;
	int cx[50], cy[50], r[50];
	int count = 0;
	int dis1, dis2;

	cin >> t;
	
	while (k != t) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		

		for (int i = 0; i < n; i++) {
			cin >> cx[i] >> cy[i] >> r[i];
			dis1 = (cx[i] - x1) * (cx[i] - x1) + (cy[i] - y1) * (cy[i] - y1);
			dis2 = (cx[i] - x2) * (cx[i] - x2) + (cy[i] - y2) * (cy[i] - y2);
			if (dis1 < r[i] * r[i] && dis2 > r[i] * r[i]) {
				count++;
			}
			else if (dis1 > r[i] * r[i] && dis2 < r[i] * r[i]) {
				count++;
			}
		}

		cout << count << "\n";
		k++;
		count = 0;
	}
	

}