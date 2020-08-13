#include <iostream>
using namespace std;
#define max 10
#define endl "\n"
int main(){
    
    //to take faster input
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int a[max] = {0};

    //size of an array
    cout << sizeof(a) << "\n";

    //number of elements in an array
    int n = sizeof(a) / sizeof(int);

    cout << n;
    return 0;
}