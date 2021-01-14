#include <iostream>
using namespace std;

void wave_sort(int a[], int n) {
    for (int i = 0; i < n; i+=2) {
        if ((a[i - 1] > a[i])) {
            swap(a[i], a[i - 1]);
        
        if (a[i] < a[i + 1])
            swap(a[i], a[i + 1]);
    }
}

int main() {

    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    wave_sort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << "|";
    cout << endl;
}