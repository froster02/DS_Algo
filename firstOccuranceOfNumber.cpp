#include <iostream>
#define max 100
using namespace std;

//First Occurance of a number using recursion (method 1)
int firstOcc1(int *a, int i, int n, int key){
    //base case
    if(i == n){
        return -1;
    }
    //base case
    if(a[i] == key){
        return i;
    }
    return firstOcc1(a, i + 1, n, key);
}

//First Occurance of a number using recursion (method 2)
int firstOcc2(int *a, int n, int key){
    //base case
    if(n == 0)
        return -1;

    //recursive case
    if(a[0] == key)
        return 0;

    int i = firstOcc2(a + 1, n - 1, key);
    if(i == -1)
        return -1;
    return (i + 1);
}

//Second Occurance of a number using recursion
int lastOcc(int *a, int n, int key){
    //base case 
    if(n == 0)
        return -1;
        
    //recursive case
    int i = lastOcc(a + 1, n - 1, key);
    if(i == -1){
        if(a[0] == key)
            return 0;
        else
            return -1;
    }
    return (i + 1);
}

//print All Occurence of a number
void allOcc(int *a, int i, int n, int key){
    if(i == n)
        return;
    if(a[i] == key)
        cout << i << ", ";
    allOcc(a, i + 1, n, key);
}

int main(){

    int n, a[max] = {0}, key;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];

    cin >> key;

    cout << firstOcc1(a, 0, n, key) << endl;

    cout << firstOcc2(a, n, key) << endl;
        
    cout << lastOcc(a, n, key) << endl;

    cout << allOcc(a, 0, n, key) << endl;

    return 0;
}