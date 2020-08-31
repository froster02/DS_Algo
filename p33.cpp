/*
Take as input a two-d array. Wave print it column-wise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
*/
#include<iostream>
#include<cstdio>
#define maximum 100
using namespace std;

void fun(int a[][maximum], int m, int n) {

	for(int c = 0; c < m; c++){
		if(c % 2 == 0) {
			for(int r = 0; r < n; r++)
				cout << a[r][c] << ", ";
		}
		else {
			for(int r = n - 1; r >= 0; r--)
				cout << a[r][c] << ", ";
		}
	}
	cout << "END" ;	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n, a[maximum][maximum] = {0};
	cin >> m >> n;
	for(int i=0; i<m; i++){
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	}

	fun(a, m, n);

	return 0;
}