#include<iostream>
#include<algorithm>
#include<cstdio>
#define maximum 1000
using namespace std;

void fun(int a[][maximum], int n){
	for(int j = n; j >= 1; j--){
		for(int i = 1; i <= n; i++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a[maximum][maximum];
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
			cin >> a[i][j];
	}
	
	fun(a, n);

	return 0;
}