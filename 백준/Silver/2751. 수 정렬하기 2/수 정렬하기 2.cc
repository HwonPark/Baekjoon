#include<iostream>
#include<algorithm>

using namespace std;


int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	int num[1000000] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);

	for (int i = 0; i < n; i++) {
		cout << num[i] << "\n";
	}
}

