#include<iostream>
using namespace std;

void sort1(int *a, int n) {
    int shift = 0, comp = 0;
    int i, j, max;
    for (i = 1; i < n; i++) {
        j = i - 1;
        max = a[i];
        while (a[j] > max && j >= 0) {
            shift++;
            comp++;
            a[j + 1] = a[j];
            j--;
        }
        shift++;
        a[j + 1] = max;
    }
    cout << "shift == " << shift << "  ";
    cout << "comparision == " << comp << "  ";
}

int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort1(a, n);
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}