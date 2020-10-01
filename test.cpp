//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define int long long int
bool isvalid(int board[], int k, int n, int time) {
    int painters = 1;
    int ansi = 0;
    for (int i = 0; i < n; i++) {
        if (board[i] + ansi > time) {
            ansi = board[i];
            painters++;
            if (painters > k) {
                return false;
            }
        } else {
            ansi += board[i];
        }
    }
    return true;
}

int minTime(int board[], int n, int k) {
    // sort(board,board+n);
    int ans = -1;
    int ms = 0;
    int mini = INT_MIN;
    for (int i = 0; i < n; i++) {
        ms += board[i];
        mini = max(mini, board[i]);
    }
    int s = mini;
    cout << "s" << s <<endl;
    int e = ms;
    cout << "e" << e << endl;
    while (s <= e) {
        int mid = (e + s) / 2;

        if (isvalid(board, k, n, mid)) {
            e = mid - 1;
            ans = mid;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int32_t main() {
    int k, n;
    cin >> k >> n;
    int board[100005];
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    cout << minTime(board, n, k) << endl;
    return 0;
}