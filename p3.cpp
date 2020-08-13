#include <iostream>
#include <cstdio>
#include <algorithm>
#define maximum 100
#define endl "\n"
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[maximum], large = INT_MIN, small = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //algo 1 
    for (int i = 0; i < n; i++) {
        large = max(large, a[i]);
        small = min(small, a[i]);
    }

    //algo 2
    // for(int i=0; i<n; i++){
    //     if(large < a[i])
    //         large = a[i];
    //     if(small > a[i])
    //         small = a[i];
    // }

    cout << "Maximum : " << large << "\nMinimum : " << small << endl;

}