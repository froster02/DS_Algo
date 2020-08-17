#include <iostream>
#include <cstdio>
#define max 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max], cumSum[max], maxSum = 0, currentSum = 0, l = -1, h = -1;

    cin >> n;
    cin >> a[0];
    cumSum[0] = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        cumSum[i] = cumSum[i - 1] + a[i];
    }

    //cummulative sum of largest subarray

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            currentSum = 0;
            currentSum = cumSum[j] - cumSum[i - 1];
            if (currentSum > maxSum) {
                maxSum = currentSum;
                l = i;
                h = j;
            }
        }
    }
    cout << "[" << l << "," << h << "]" << " = " << maxSum << endl;

    return 0;
}