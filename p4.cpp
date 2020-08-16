#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;
int binarySearch(int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            high = mid - 1;
        else if (key > a[mid])
            low = mid + 1;
    }
    return -1;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max], key;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> key;

    cout << key << " Key found at index " << binarySearch(a, n, key) << endl;
}