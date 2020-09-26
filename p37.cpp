#include <iostream>
#include <cstdio>
#define max 10000
using namespace std;

int square_root(int n) {
    int s = 0, e = n;
    float ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        // int mid = (s + e) >> 1;

        if (mid * mid == n)
            return mid;
        if (mid * mid < n) {
            ans = mid;
            s = mid + 1;
        } else
            e = mid - 1;
    }
    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << square_root(n) << endl;

    return 0;
}