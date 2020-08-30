/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.calculate the max value in the array and return that value.

Input Format
First line contains integer n as size of array. Next n lines contains a single integer as element of array.
*/

#include<iostream>
#include<algorithm>
#include<cstdio>
#define maximum 1000
using namespace std;

long int maxValue(long int a[], long int n){
	sort(a, a+n);
	return a[n-1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int n, a[maximum] = {0};
	cin >> n;
	for(long int i=0; i<n; i++)
		cin >> a[i];

	cout << maxValue(a, n);

	return 0;
}