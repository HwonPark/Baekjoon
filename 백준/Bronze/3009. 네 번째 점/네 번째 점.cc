#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	// 문제풀이 방법 => 각 x, y 의 세점을 비교후 셋과 다른 점을 찾기
	// 그 다른점이 찾고자하는 점이 됨

	int x[3];
	int y[3];
	int x4, y4; // 찾고자하는 네번째 점

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	
	if (x[0] == x[1]) {
		x4 = x[2];
	}
	else if (x[0] == x[2]) {
		x4 = x[1];
	}
	else {
		x4 = x[0];
	}

	if (y[0] == y[1]) {
		y4 = y[2];
	}
	else if (y[0] == y[2]) {
		y4 = y[1];
	}
	else {
		y4 = y[0];
	}

	cout << x4 << " " << y4;

}
