#include <iostream>
#include <cstdio>
#define max 100
using namespace std;
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a[max] = {
        0
    };
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    insertionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << "|";

    return 0;
}