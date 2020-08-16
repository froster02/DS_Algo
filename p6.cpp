#include <iostream>
#include <cstdio>
#include <algorithm>
#define max 100
#define endl "/n"
using namespace std;

void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}
int main(){
    int n, a[max];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    bubbleSort(a, n);

    for(int i=0; i<n; i++)
        cout << a[i] << "|";
}