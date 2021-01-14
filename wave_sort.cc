#include <iostream>
using namespace std;

void wave_sort(int a[], int n) {
    for (int i = 0; i < n; i+=2) {
        //check previous element
        if ((a[i - 1] > a[i]) && (i != 0)) {
            swap(a[i], a[i - 1]);
        }
        //check next element
        if (i != (n - 1) && a[i] < a[i + 1])
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