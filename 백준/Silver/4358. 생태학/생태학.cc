//#define _USE_MATH_DEFINES
#include<iostream>
//#include<cstring>
#include<algorithm>
//#include<cmath>
//#include<vector>
#include<map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	char input[51];
	double total = 0;
	map<string, double> tree;
	map<string, double>::iterator iter;

	while (1) {
		cin.getline(input, 50);
		if (cin.eof() == true) {
			break;
		}
		if (tree.count(input) > 0) {
			tree[input]++;
		}
		else {
			tree[input] = 1;
		}
		total++;
	}

	for (iter = tree.begin(); iter != tree.end(); iter++) {
		cout << fixed;
		cout.precision(4);
		cout << iter->first << " " << iter->second / total * 100 << "\n";
	}
	
}