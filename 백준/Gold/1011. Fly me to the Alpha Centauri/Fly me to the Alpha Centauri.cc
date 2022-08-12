#include<iostream>
#include<cstring>
//#include<string>

using namespace std;;

void fly(int x, int y);

int main() {
	int n;
	int x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		fly(x, y);
	}

}

void fly(int x, int y) {

	int cnt = 0;
	long long int k = 0;
	y = y - x;
	while (1) {
		if (y<=k) {
			break;
		}
		cnt++;
		if (cnt % 2 == 0) {
			k = k + cnt / 2;
		}
		else {
			k = k + cnt / 2 + 1;
		}
	}
	cout << cnt << endl;
}
