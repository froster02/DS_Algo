#include <iostream>
using namespace std;
int sum(int n, ...) {
    va_list a;
    va_start(a, n);

    int x, s=0;
    for(int i=0; i<n; i++) {
        x = va_arg(a, int);
        s += x;
    }
    return s;
}
int main() {
    cout << sum(3, 10, 20, 30) << endl;
    cout << sum(5, 1, 2, 3, 4, 5);
}