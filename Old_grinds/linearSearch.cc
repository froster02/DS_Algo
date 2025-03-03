#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n, k;
    vector<int> v(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cin >> k;
    int i;
    for(i = 0; i < n; i++){
        if(v[i] == k) {
            cout << "key found at " << i << " index";
            break;
        }
    }
    if(i == n)
        cout << "key not found";
    
    return 0;
}