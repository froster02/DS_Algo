/* BITWISE -> clear (0 1 0 1) */ 

#include <iostream>
#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n = 5, pos;
    cin >> pos;

    int mask = (pos >> 1);
    int ans = (n & mask);

    cout << ans << endl;

    return 0;
}