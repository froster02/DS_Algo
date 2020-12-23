#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b, int gcd) {
    return (a * b) % gcd;
}

int main() {

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    int res = gcd(a, b);
    cout << lcm(a, b, res) << endl;

    return 0;
}