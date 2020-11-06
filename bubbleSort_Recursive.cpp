#include <iostream>
#include <algorithm>
#define maxm 10
using namespace std;

void bubbleSortR(int a[], int n){
    //base case
    if(n == 1)
        return;
    //recursive case
    for(int j = 0; j < n - 1; j++){
        if(a[j] > a[j + 1]) 
            swap(a[j], a[j + 1]);
    }
    //sort the n - 1
    bubbleSortR(a, n - 1);
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {

    int n, a[maxm];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bubbleSort(a, n);

    cout << endl;

    cout << bubbleSortR(a, n) << " "; 

    return 0;
}