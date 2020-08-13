#include <iostream>
#include <cstdio>
#define max 100
# define endl "\n"
using namespace std;

int binarySearch(int a[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (a[mid] == key)
            return mid;

        else if (a[mid] < key)
            end = mid + 1;

        else if (a[mid] > key)
            start = mid - 1;

    }
    return -1;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[max], key, n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    cout << key << " is found at index " << binarySearch(a, n, key);
}