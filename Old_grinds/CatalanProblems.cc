#include <iostream>
#define uli unsigned long int
using namespace std;

uli catalan(uli n){
    //base
    if(n <= 1)
        return 1;
    
    //catalan(n) is sum of catalan(i) * catalan(n - i - 1)
    uli res = 0;
    for(int i = 0; i < n; i++)
        res = res + catalan(i) * catalan(n - i - 1);
    
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << catalan(n);
}