#include <iostream>
using namespace std;

int ride(int n, int w){
    if(n == 0 || n == 1)
        return 1;

    return (ride(n - 1, w) + ((n - 1) * ride(n - 2, w))); 
}

int main(){
    // number of friends = 3
    // number of ways = 4
    int n, w;
    cin >> n >> w;

    cout << ride(n, w) << endl;

    return 0;
}