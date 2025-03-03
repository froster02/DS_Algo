#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int fun(int h, int m, vector < int > v) {

    sort(v.begin(), v.end());

    int ans = 0;
    for(ll i=0; i<h; i++){
        if(m >= v[i]){
            ans++;
            m -= v[i];
        }
    }
    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc, j = 1;
    cin >> tc;
    while (tc--) {
        int h, m, input;
        cin >> h >> m;
        vector < int > v;
        for (int i = 1; i <= h; i++) {
            cin >> input;
            v.push_back(input);
        }
        cout << "Case #" << j << ": " << fun(h, m, v) << "\n";;
        j++;
    }
    return 0;
}