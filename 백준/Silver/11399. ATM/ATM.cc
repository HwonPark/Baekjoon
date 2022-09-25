#include<iostream>

using namespace std;;

int main() {
	int n;
	int p[1001];
	long long int sum = 0;
	int temp;
	int min_index;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < n; i++) {
		min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (p[j]<p[min_index]) {
				min_index = j;				
			}
		}	
		temp = p[i];
		p[i] = p[min_index];
		p[min_index] = temp;
	}

	for (int i = 0; i < n; i++) {
		sum += p[i] * (n - i);
	}
	cout << sum;
}
