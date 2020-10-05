/* BITWISE -> set the bit n = 5 (0 1 0 1) */ 

#include <iostream>
#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n = 5, pos;
    cout << "Enter position to set the bit : ";
    cin >> pos;

    int mask = (1 << pos);
    int bit = (n & mask) > 0 ? 1 : 0;
    cout << bit << endl;

    return 0;
}