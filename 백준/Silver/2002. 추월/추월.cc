//#define _USE_MATH_DEFINES
#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//#include<vector>
#include<map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int min = 10000;
	string input;
	int out[1000];
	int count = 0;
	map<int, string> car;
	map<int, string>::iterator iter;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> input;
		car[i] = input;
	}

	for (int i = 1; i <= n; i++) {
		cin >> input;

		for (iter = car.begin(); iter != car.end(); iter++) {
			if (iter->second == input) {
				out[i] = iter->first;
				break;
			}
		}
	}

	for (int i = n; i > 0; i--) {
		if (out[i] < min) {
			min = out[i];
		}

		if (out[i] > min) {
			count++;
		}

	}
	cout << count;
	
}