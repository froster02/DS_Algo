#include <iostream>
using namespace std;
#define max 10000
#define endl '\n'

int help_rahul(int a[], int n, int key){
    int s = 0, e = n - 1;
    while(s <= e){
        int mid = (s + e) / 2;

        if(a[mid] == key)
            return mid;

        if(key <= a[mid]){
            if(key >= a[s] && key <= a[mid])
                e = mid - 1; 
            else 
                s = mid + 1;
        }

        else {
            if(key >= a[mid] && key <= a[e])
                s = mid + 1;
            else 
                e = mid - 1;
        }            
    }
    return -1;
}

int main(){
    int a[max], n, key;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    cin >> key;

    cout << help_rahul(a, n, key);

    return 0;
}