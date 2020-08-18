#include <iostream>
#include <cstdio>
#define maximum 100
using namespace std;

void findSumKey(int a[], int n, int key) {
    int l = 0, h = n - 1;
    while (l < h) {
        int arrSum = a[l] + a[h];
        if (arrSum > key)
            h--;
        else if (arrSum < key)
            l++;
        else if (arrSum == key) {
            cout << "Pair is " << a[l] << " and " << a[h] << endl;
            l++;
            h--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //given sorted array, find the pair of elements that sum = key (given)
    int n, a[maximum], key;
    cout << "Enter limit : ";
    cin >> n;
    cout << "Enter Key : ";
    cin >> key;
    cout << "Enter sorted array : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    findSumKey(a, n, key);

    return 0;
}