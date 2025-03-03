#include <iostream>
#include <algorithm>
#include <cstdio>
#define maximum 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[maximum], cs = 0, ms = 0;
    cin >> n;
    for(int i=0; i<n ;i ++)
        cin >> a[i];

    //Kadane's algorithm (N)
    for (int i = 0; i < n; i++) {
        cs = cs + a[i];
        if (cs < 0)
            cs = 0;
    }
    ms = max(ms, cs);
    cout << ms << endl;

    return 0;
}