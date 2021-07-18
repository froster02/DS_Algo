#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
    }

    int arr[n*2] = {0}, k = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            arr[k] = a[i][j];  
            k++;
        }
    }
    
    int len = sizeof(arr)/sizeof(arr[0]);

    int maximum = INT_MIN;
    for(int i = 0; i < 2; i++){
        if(arr[i] > maximum) 
            maximum = arr[i];
    }
    cout << maximum << endl;
    
    for(int i = 2; i < len; i++){
        if(arr[i] > arr[i-1] && arr[i+1] == arr[i])
            maximum += arr[i];
        if(arr[i] > arr[i-1] && arr[i+1] < arr[i-1])
            maximum += arr[i];
    }
    
    cout << endl << maximum << endl;
    return 0;
}