#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int tn;
	int pn=0;
	int dn=1;
	int sum = 0;
	int i = 0;
	cin >> n;

	while (1) {		
		if (n / dn == 0) {
			break;
		}
		dn *= 10;
		pn++;		
	}

	//cout << pn << endl;

	if (n <= 18) {
		for (i = 1; i <= n; i++) {
			tn = i;
			sum = i;
			for (int j = 0; j < pn; j++) {
				sum += tn % 10;
				tn = (tn - tn % tn) / 10;

				if (tn == 0) {
					break;
				}
			}
			if (sum == n) {
				cout << i << endl;
				break;
			}
		}
		if (i > n) {
			cout << "0" << endl;
		}
	}
	
	else {
		for (i = n - pn * 9; i <= n; i++) {
			tn = i;
			sum = i;
			for (int j = 0; j < pn; j++) {
				sum += tn % 10;
				tn = (tn - tn % tn) / 10;

				if (tn == 0) {
					break;
				}
			}
			if (sum == n) {
				cout << i << endl;
				break;
			}
		}
		if (i > n) {
			cout << "0" << endl;
		}
	}
}