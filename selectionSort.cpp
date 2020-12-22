#include <iostream>
#include <cstdio>
#include <algorithm>
#define max 100
#define endl "\n"
using namespace std;

void selectionSort(int a[], int n) {
    int i = 0, min_index = 0;
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index])
                min_index = j;
        }
        swap(a[i], a[min_index]);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    selectionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << "|";

    return 0;
}