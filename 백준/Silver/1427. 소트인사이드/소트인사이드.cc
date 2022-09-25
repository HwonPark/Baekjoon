#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	char arr[11] = {};
	int num[11];
	int size;

	cin >> arr;
	size = strlen(arr);
	for (int i = 0; i < size; i++) {
		num[i] = arr[i] - 48;
	}
	sort(num, num + size);
	for (int i = size-1; i >=0; i--) {
		cout << num[i];
	}
}

