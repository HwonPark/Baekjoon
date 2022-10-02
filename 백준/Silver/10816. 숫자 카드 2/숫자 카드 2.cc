#include<iostream>
#include<map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	int input;
	map<int, int> card;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (card.count(input) > 0) {
			card[input]++;
		}
		else {
			card[input] = 1;
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> input;

		if (card.count(input) > 0) {
			cout << card[input] << " ";
		}
		else {
			cout << "0 ";
		}
	}
}