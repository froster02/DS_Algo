#include <iostream>
using namespace std;
int main() {
    int n1 = 0, n2 = 1, n3, i, number, even = 0, odd = 1;
    cin >> number;
    if ((number < 5) || (number >= 20)) {
        cout << "INVALID INPUT";
        //break;
    } else {
        cout << n2 << " ";
        for (i = 2; i <= number; ++i) {
            n3 = n1 + n2;
            if (n3 % 2 == 0)
                even++;
            else if (n3 % 2 == 1)
                odd++;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
        cout << endl;
        cout << even << endl;
        cout << odd;
    }
    return 0;
}