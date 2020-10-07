/* BITWISE -> Replace bits in M by N 
    N = 1 0 0 0 0 0 0 0 0 0 0
    I = 2
    J = 6
    M = 1 0 1 0 1

    Output = 1 0 0 0 1 0 1 0 1 0 0
*/

#include <iostream>
#include <cstdio>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n, i, j, m;
    cin >> n >> i >> j >> m;
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    int cleared = n & mask;
    int ans = cleared | (m << i);

    cout << ans << endl;

    return 0;
}