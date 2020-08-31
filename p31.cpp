#include<iostream>
#include<cstdio>
#include<algorithm>
#define endl "\n"
#define maximum 100
using namespace std;

//maximum sum of tripplets

void fun(int a[], int n, int key) {

	sort(a, a + n);

	for (int k = 0; k < n; k++) {
		int i = k + 1, j = n - 1;
		while (i < j) {
			if (a[i] + a[j] + a[k] == key) {
				cout << a[k] << ", " << a[i] << " and " << a[j] << endl;
				i++;
				j--;
			} else if (a[i] + a[j] + a[k] < key)
				i++;
			else
				j--;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[maximum], key = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> key;

	fun(a, n, key);

	return 0;
}