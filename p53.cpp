/* BITWISE -> finding odd and even using */ 

#include <iostream>
#include <cstdio>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int n = 5, pos;
    cin >> pos;
    // if n AND 1 gives output 1 at the right most bit, then the condition will become true
    if (n & 1)
        cout << "ODD";
    else
        cout << "EVEN";

    return 0;
}