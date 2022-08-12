#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//피타고라스

	int side[3];

	while (1) {
		for (int i = 0; i < 3; i++) {
			cin >> side[i];
		}

		if (side[0] == 0 && side[1] == 0 && side[2] == 0) {
			break;
		}

		sort(side, side + 3);

		if (side[0] * side[0] + side[1] * side[1] == side[2] * side[2]) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}
	}

	
}