/* BITWISE -> 
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once.
Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number */

#include <iostream>
#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    vector<int > v;
    int n, unique = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        v.push_back(no);
        unique = unique ^ no;
    }
    
    cout << unique << endl;

    return 0;
}