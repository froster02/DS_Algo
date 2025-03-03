/*
You are given a one dimensional array that may contain both positive and negative integers,
find the sum of contiguous subarray of numbers which has the largest sum.
For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format
The first line consists of number of test cases T. Each test case consists of two lines. 
The first line of each testcase contains a single integer N denoting the number of elements for the array A. 
The second line of each testcase contains N space separated integers denoting the elements of the array.
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int tc = 0;
	cin >> tc;
	while(tc > 0){
		long long int a[100000000];
		int n;
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];
		
		int cs = 0, ms = 0;
		for(int i = 0; i < n; i++){
			cs = cs + a[i];
			if(cs <= 0)
				ms = cs;
		}
		ms = max(cs, ms);
		cout << ms << endl;
	}
	
	return 0;
}