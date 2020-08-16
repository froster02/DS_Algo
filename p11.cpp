#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;

//sum of largest sub array
void subarraySum(int a[], int n) {
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;
            for (int k = i; k <= j; k++) {
                currentSum += a[k];
            }
            if (currentSum > maxSum)
                maxSum = currentSum;
        }
    }
    cout << maxSum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    subarraySum(a, n);

    return 0;
}