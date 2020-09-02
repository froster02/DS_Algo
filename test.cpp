#include<iostream>
#include<algorithm>
#include<cstdio>
#define maximum 1000
using namespace std;

int compare(int a, int b) {
	return a < b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc = 0;
	cin >> tc;

	while (tc > 0) {
		int n, a[maximum] = {0};
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];

		sort(a, a + n, compare);

		for (int i = 0; i < n; i++)
			cout << a[i];
	}
	return 0;
}