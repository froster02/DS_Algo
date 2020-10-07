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
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;
    
    //input
    int n, no, a[100005];
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> no;
        a[i] = no;

        //take xor to sum up the unique elements
        res = res ^ no;
    }

    int temp = res;

    //position at which set bit is located
    int pos = 0;
    while ((temp & 1) != 1) {
        pos++;
        temp = temp >> 1;
    }

    //the first bit in XOR is to position 'pos'
    int mask = (1 << pos);

    //find those number which contain set bit at position 'pos'
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] & mask) > 0) {
            x = x ^ a[i];
        }
    }

    //XOR with the previous result of unique elements and the number where it found the set bit
    y = res ^ x;

    //output the value of unique numbers
    cout << min(x, y) << " " << max(x, y) << endl;
    return 0;
}