#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


	// 사각형안, 왼쪽 반원, 오른쪽 반원
	
	int w, h, x, y, p;
	int player[50][2];
	int dis1, dis2, radius2;
	int count = 0;

	cin >> w >> h >> x >> y >> p;

	radius2 = h * h / 4;

	for (int i = 0; i < p; i++) {
		cin >> player[i][0] >> player[i][1];
		if (player[i][0] >= x && player[i][0] <= (x + w) && player[i][1] >= y && player[i][1] <= (y + h)) {
			count++;
		}
		else if (player[i][0] >= (x - h / 2) && player[i][0] < x) {
			dis1 = pow(player[i][0] - x, 2) + pow(player[i][1] - (y + h / 2), 2);
			if (dis1 <= radius2) {
				count++;
			}
		}
		else if (player[i][0] > (x + w) && player[i][0] <= (x + w + h / 2)) {
			dis2 = pow(player[i][0] - (x + w), 2) + pow(player[i][1] - (y + h / 2), 2);
			if (dis2 <= radius2) {
				count++;
			}
		}

	}

	cout << count;
}