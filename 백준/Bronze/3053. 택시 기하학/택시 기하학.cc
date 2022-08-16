#define _USE_MATH_DEFINES
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


	int r;
	double area1, area2;

	cin >> r;

	area1 = M_PI * r * r;
	area2 = r * r * 2;

	cout << fixed;
	cout.precision(6);
	cout << area1 << "\n" << area2 << "\n";
}