#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;

void subarray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                cout << a[k] << "|";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    subarray(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << "|";

    return 0;
}