#include <iostream>
#include <algorithm>
#include <cstdio>
#define max 100
using namespace std;
bool compare(int a, int b) {
    return a > b;
}

void bubbleSort(int a[], int n, bool( & comp)(int a, int b)) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) {
            if (comp(a[j], a[j + 1]))
                swap(a[j], a[j + 1]);
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bubbleSort(a, n, compare);

    for (int i = 0; i < n; i++)
        cout << a[i] << "|";

    return 0;
}