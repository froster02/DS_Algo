/* BITWISE -> find the ith bit of 5 from right hand side (0 1 0 1) */ 

#include <iostream>
#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n = 5, pos;
    cout << "Enter position to find bit : ";
    cin >> pos;

    int mask = (1 << pos);
    int bit = (n & mask) > 0 ? 1 : 0;
    cout << "Bit at the position : " << bit << endl;

    return 0;
}