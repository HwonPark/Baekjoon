//#define _USE_MATH_DEFINES
#include<iostream>
//#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

class Member {
public:
	int age;
	string name;
};

bool compare(Member a, Member b) {
	return a.age < b.age;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	Member member[100000];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> member[i].age >> member[i].name;
	}

	stable_sort(member, member + n, compare);

	for (int i = 0; i < n; i++) {
		cout << member[i].age << " " << member[i].name << "\n";
	}
}