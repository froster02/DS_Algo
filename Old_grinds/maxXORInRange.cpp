/*
We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

Input Format
We are given two integers x and y

Constraints
l <= r <= 1000

Output Format
Print the maximum value of a XOR b

Sample Input
5
6
Sample Output
3
Explanation
If a and b are taken to be 5. Then a xor b = 0
If a and b are taken to be 6. Then a xor b = 0
If a is 5 and b is 6. Then a xor b is 3.
*/

// #include<iostream>
// using namespace std;
// int main () {
// 	int a, b, ans, msb = 0;
// 	cin >> a >> b;
// 	ans = a ^ b;
// 	while(ans){
//         msb++;
//         ans = ans >> 1;
//     }
//     //cout << msb << endl;
//     int res = 0,final = 0;
//     while(msb--){
//         res = res ^ 1;
//         final = res;
//         res = res << 1;
//     }
//     cout << final << endl;
// }

#include <iostream> 
using namespace std; 

int maxXORInRange(int L, int R) { 
	int LXR = L ^ R; 
	int msbPos = 0; 
	while (LXR) { 
		msbPos++; 
		LXR >>= 1; 
	} 
	int maxXOR = 0; 
	int two = 1; 
	while (msbPos--) { 
		maxXOR += two; 
		two <<= 1; 
	} 
	return maxXOR; 
} 

int main() { 
	int L , R ;
	cin >> L >> R; 
	cout << maxXORInRange(L, R) << endl; 
	return 0; 
} 

