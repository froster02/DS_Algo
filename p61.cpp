/* BIIWISE -> 
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3

Sample Output
3

Explanation
3 is present only once
*/

#include <iostream>
#include <cstdio>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define maxm 1000
using namespace std;

int main() {
    IO;

    int n, a[maxm];
    cin >> n;
    for(int i=0; i<n; i++){
        int no;
        cin >> a[i];
    }
    

    return 0;
}