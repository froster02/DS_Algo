/* BITWISE -> update the bits n = 5 (0 1 0 1) */ 

#include <iostream>
#include <cstdio>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n = 5, pos, v;
    cin >> pos >> v;

    int mask = ~(1 << pos);
    int cleared_n = n & mask;
    n = cleared_n | (v << pos);
    cout << n << endl;

    return 0;
}