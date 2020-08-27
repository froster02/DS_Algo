#include <iostream>
#include <algorithm>
using namespace std;

// void bubbleSort(int a[], int n){

//     for(int i=0; i < n - 1; i++){
//         for(int j = 0; j < n-1-i; j++){
//             if(a[j] > a[j + 1])
//                 swap(a[j], a[j + 1]);
//         }
//     }
// }

// void insertionSort(int a[], int n){

//     for(int i = 1; i < n; i++){
//         int key = a[i];
//         int j = i - 1;
//         while (j >= 0 && key < a[j]){
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = key;
//     }
// }

void selectionSort(int a[], int n){
    int mid = 0;
    for(int i = 0; i < n - 1; i++){
        mid = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[mid])
                mid = j;
        }
        swap(a[i], a[mid]);
    }
}

int main(){

    int n, a[10];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    //bubbleSort(a, n);
    //insertionSort(a, n);
    selectionSort(a, n);

    for(int i=0; i<n; i++)
        cout << a[i] << "|";

    return 0;
}