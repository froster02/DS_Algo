/* book allocation problem */ 
#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdio>
#define max 10000
using namespace std;

bool isPossible(int a[], int n, int m, int curr_min) {
    int studentUsed = 1;
    int pages_reading = 0;
    for (int i = 0; i < n; i++) {
        if (pages_reading + a[i] > curr_min) {
            studentUsed++;
            pages_reading = a[i];
            if (studentUsed > m)
                return false;
        } else {
            pages_reading = pages_reading + a[i];
        }
    }
    return true;
} 

int find_pages(int a[], int n, int m) {
    int sum = 0;
    if (n < m)
        return -1;
    for (int i = 0; i < n; i++)
        sum += a[i];
    int s = a[n - 1], ans = INT_MAX, e = sum;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (isPossible(a, n, m, mid)) {
            ans = min(ans, mid);
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t > 0) {
        int m, n, a[max];
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << find_pages(a, n, m) << endl;
    }

    return 0;
}