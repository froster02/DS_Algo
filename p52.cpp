/* BITWISE -> finding of unique(non-repeating) number */ #include <iostream>

#include <cstdio>
#include <vector>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    vector < int > v;
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int no;
        cin >> no;
        v.push_back(no);
        //bitwise XOR operator, and help us to use no storage as we are doing this in one constant variable
        ans = ans ^ no;
    }
    cout << ans << endl;

    return 0;
}