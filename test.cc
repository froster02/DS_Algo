#include <iostream>
#include <math.h>
using namespace std;

int solve(int n) {

    int maxm = 3;
    int c = 0;
    
    int i = 0;
    while(maxm != 0){
        if((n ^ i) && (n | i)) {
            c++;
            n = n << 1;
        }
        i++;
    }
    return c;
}

int main(){

    int n;
    cin >> n;

    if(n == 0)
        cout << "1";
    else
        cout << solve(n);

    return 0;
}
