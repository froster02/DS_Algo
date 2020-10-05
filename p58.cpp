/* BITWISE -> clearing range of bits from i to j */ 

#include <iostream>
#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n, i, j;
    cin >> n >> i >> j;
    int one = (~0);
    int a = one << (j + 1);
    cout << "A " << a << endl;
    int b = (1 << i) - 1;
    cout << "B " << b << endl;
    int mask = a | b;
    cout << "Mask " << mask << endl;
    int ans = n & mask;

    cout << ans << endl;

    return 0;
}