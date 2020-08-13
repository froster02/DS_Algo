#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;
int main(){

    ios_base :: sync_with_stdio(0);
    cin.tie(NULL);

    int i, a[max], key, n;

    cout << "Enter limit : ";
    cin >> n;
    for(i=0; i<n; i++)
        cin >> a[i];

    cout << "Enter key : ";
    cin >> key;

    for(i=0; i<n; i++){
        if(a[i] == key){
            cout << key << "found at " << i << " index";
            break;
        }
    }
    if(i == n)
        cout << key << " not found";

    return 0;
}