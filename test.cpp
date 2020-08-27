#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int a[], int n){
    int key = 0, j = 0;
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while (j >= 0 && key < a[j]){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main(){

    int n, a[10];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    //bubbleSort(a, n);
    insertionSort(a, n);
    //selectionSort(a, n);

    for(int i=0; i<n; i++)
        cout << a[i] << "|";

    return 0;
}