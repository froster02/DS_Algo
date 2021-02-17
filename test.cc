#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a[] = {1,1,1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(int);
    cout << upper_bound(a, a + n, 1) - a;
    cout << endl;
    cout << lower_bound(a, a + n, 1) - a;
    cout << endl;
    return 0;
}