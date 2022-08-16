//#define _USE_MATH_DEFINES
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//전체 직사각형에서 작은 직사각형 제외
	//재배열 필요

	int k;
	int side[6][3];
	int count[4] = { 0 };
	int sortside[6];
	int i, ii;
	int smallarea = 0, bigarea = 0;
	
	cin >> k;

	

	for (i = 0; i < 6; i++) {
		cin >> side[i][0] >> side[i][1];
		count[side[i][0] - 1]++;
	}

	for (i = 0; i < 6; i++) {
		side[i][2] = count[side[i][0] - 1];
		
	}

	for (i = 0; i < 6; i++) {
		ii = i;
		if (side[i][2] == 1) {
			for (int j = 0; j < 6; j++) {
				sortside[j] = side[ii % 6][1];
				ii++;
			}
			break;
		}
	}
	

	if (side[(i + 1) % 6][2] == 1) {
		bigarea = sortside[0] * sortside[1];
		smallarea = sortside[3] * sortside[4];
	}
	else if (side[(i + 1) % 6][2] == 2) {
		bigarea = sortside[0] * sortside[5];
		smallarea = sortside[2] * sortside[3];
	}


	cout << k * (bigarea - smallarea);
}