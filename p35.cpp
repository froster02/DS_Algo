#include<iostream>
#include<cstdio>
#include<algorithm>
#define endl "\n"
#define maximum 1000
using namespace std;

//maximum circular sum

int kadane(int a[], int n) {
    int currentSum = 0, maxSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += a[i];
        if (currentSum < 0)
            currentSum = 0;
        if (maxSum < currentSum)
            maxSum = currentSum;
    }
    return maxSum;
}

int circularSum(int a[], int n) {
    int max_kadane = kadane(a, n);

    int wrap_sum = 0;
    for (int i = 0; i < n; i++) {
        wrap_sum = wrap_sum + a[i];
        a[i] = -a[i];
    }

    wrap_sum = wrap_sum + kadane(a, n);

    return (wrap_sum > max_kadane) ? wrap_sum : max_kadane;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 0;
    cin >> tc;
    while (tc > 0) {
        int n, a[maximum];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << circularSum(a, n);
    }

    return 0;
}