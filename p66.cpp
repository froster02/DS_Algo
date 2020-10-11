#include <iostream>
#define endl '\n'
#define maxm 100005
using namespace std;
int main(){

    int n, a[maxm], uni = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        //this will give the bitwise XOR of those two unique number as one number (3 ^ 4) = 4
        uni = uni ^ a[i];
    }

    //find the MSB set bit position
    int pos = 0;
    for(    ; uni > 0;   ){
            uni = uni >> 1;
            pos++;
    }
    cout << pos << endl;

    return 0;
}