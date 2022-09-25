//#define _USE_MATH_DEFINES
#include<iostream>
//#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int input;
	vector<int> v;
	vector<int> sv;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
		sv.push_back(input);
	}

	sort(sv.begin(), sv.end());
	sv.erase(unique(sv.begin(), sv.end()), sv.end()); 

	for (int i = 0; i < n; i++) {
		cout << lower_bound(sv.begin(), sv.end(), v[i]) - sv.begin() << " ";
	}
}