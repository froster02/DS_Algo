#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    //Method 1
    int a=0;
    while(n>0){
        a = a + (n&1);
        n = n >> 1;     //left shift
    }
    cout << "Method 1 : " << a << endl;

    //Method 2
    int b=0;
    while(n>0){
        n = n & (n-1);
        b++;
    }
    cout << "Method 2 : " << b;
}