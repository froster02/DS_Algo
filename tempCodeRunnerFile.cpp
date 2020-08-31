#include<iostream>
#include<cstdio>
#include<algorithm>
#define endl "\n"
#define maximum 100
using namespace std;

void fun(int a[], int n, int key) {

	sort(a, a + n);
	
	int i = 0, j = n - 1;
	while (i < j){
		if(a[i] + a[j] == key) {
			cout << i << " and " << j << endl;
			i++;
			j--;
		}
		else if(a[i] + a[j] < key)
			i++;
		else 
			j--;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[maximum] = {0}, key = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> key;

	fun(a, n, key);

	return 0;
}