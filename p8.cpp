#include <iostream>
#include <cstdio>
#include <algorithm>
#define max 100
using namespace std;

//comparator function (sort in Increasing Order)
// bool compare(int a, int b){
//     return a > b;
// }

//comparator function (sort in Decreasing Order)
bool compare(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a[max];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    sort(a, a+n, compare);

    for(int i=0; i<n; i++)
        cout << a[i] << "|";
    
    return 0;
}